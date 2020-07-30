#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    for (int a = 0; a < lost.size(); a++)
    {
        for (int b = 0; b < reserve.size(); b++)
        {
            if (lost[a] == reserve[b])
            {
                reserve.erase(reserve.begin() + b);
                lost.erase(lost.begin() + a);
                a--;
                b--;
                answer++;
                break;
            }
        }
    }
    for (int a = 0; a < lost.size(); a++)
    {
        for (int b = 0; b < reserve.size(); b++)
        {
           if (lost[a] - 1 == reserve[b])
            {
                reserve.erase(reserve.begin() + b);
                lost.erase(lost.begin() + a);
                a--;
                b--;
                answer++;
                break;
            }
            else if (lost[a] + 1 == reserve[b])
            {
                reserve.erase(reserve.begin() + b);
                lost.erase(lost.begin() + a);
                a--;
                b--;
                answer++;
                break;
            }
        }
    }
    return n - lost.size();
}

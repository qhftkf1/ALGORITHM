/*
#include <string>
#include <vector>
#include <iostream>

using namespace std;

int count_len(int count)
{
    int ans;
    
    ans = 0;
    while (count)
    {
        ans++;
        count /= 10;
    }
    return ans;
}
int fn_min(int a, int b)
{
    if (a > b)
        return b;
    else
        return a;
}
int solution(string s) {
    int answer = s.size();
    int result = 0;
    int i;
    int start;
    int count;
    int idx;
    string org;

 
    for (i = 1; i <= s.size() / 2; i++)
    {
        idx = i;
        result = 0;
        org = s.substr(0, i);
        while (idx <= s.size())
        {
            count = 1;
            while (org == s.substr(idx, i))
            {
                count++;
                idx += i;
            }
            if(count > 1)
                result += count_len(count);
            result += i;
            org = s.substr(idx, i);
            idx += i;
        }
        result += s.size() % i;
        answer = fn_min(answer, result);
       
    }
    cout << answer << endl;
    return answer;
}

*/
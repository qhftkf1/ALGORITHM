#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

long long solution(int n, vector<int> times) {
    long long answer = 0;
    long long left;
    long long right;
    long long mid;
    long long temp;

    sort(times.begin(), times.end());
    right = times.back() * (long long)n;
    left = 0;
    while (left <= right) {
        mid = (left + right) / 2;
        temp = 0;
        for (int t : times) {
            temp = temp + mid / t;
        }
        if (temp >= n)
            right = mid - 1;
        else
            left = mid + 1;
    }
    answer = left;
    return answer;
}

//int main(void){
//    vector<int> times;
//    int result;
//    times.push_back(7);
//    times.push_back(10);
//    result = solution(6, times);
//}
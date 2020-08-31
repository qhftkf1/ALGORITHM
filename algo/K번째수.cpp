#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    

    for (int i = 0; i < commands.size(); i++) {
        vector<int> nums;
        for (int j = commands[i][0] - 1; j <= commands[i][1] - 1; j++) {
            nums.push_back(array[j]);
        }
        sort(nums.begin(), nums.end());
        answer.push_back(nums[commands[i][2] - 1]);
    }
    return answer;
}
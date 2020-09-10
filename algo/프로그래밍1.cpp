#include<bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> se;
   
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            se.insert(numbers[i] + numbers[j]);
        }
    }
    for (int ans : se) {
        answer.push_back(ans);
    }
    return answer;
}

int main(void) {
    vector<int> numbers = { 2, 1, 3, 4, 1 };
    solution(numbers);
}
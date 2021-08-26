#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool comp(int a, int b){
    return a > b;
}
int solution(vector<int> people, int limit) {
    int answer = 0;
    int left = 0;
    int right = people.size() - 1;
    int sum = 0;
    sort(people.begin(), people.end(), comp);
    while(left < right){
        sum = people[left] + people[right];
        if(sum > limit){
            left++;
        }else{
            left++;
            right--;
        }
        answer++;
    }
    if(left == right) answer++;
    return answer;
}
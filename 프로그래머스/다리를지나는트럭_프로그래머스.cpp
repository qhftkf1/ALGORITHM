/*
 다리를 지나는 트럭
*/

#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0; int i = 0; int sum = 0;
   queue<int> pipe;
    
    while(1){
        answer++;
        if(pipe.size() == bridge_length){
           sum -= pipe.front();
           pipe.pop();
        }
        if(sum + truck_weights[i] <= weight){
            if(i == truck_weights.size() - 1){
                answer += bridge_length;
                break;
            }
            sum += truck_weights[i];
            pipe.push(truck_weights[i]);
            i++;
        }else pipe.push(0);
    }
    return answer;
}
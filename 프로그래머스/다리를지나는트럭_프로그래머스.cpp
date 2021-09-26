#include <string>
#include <vector>
#include <queue>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int cnt = 0;
    int i = 0;
    int sum = 0;
    queue<int> bus;
    
    sort(truck_weights.begin(), truck_weights.end());
    bus.push(truck_weights[i++]);
    while(!bus.empty())
    {
        if(bus.size() < bridge_length)
        {
            if(sum + truck_weights[i] <= weight)
            {
                bus.push(truck_weights[i]);
                sum += truck_weights[i];
                i++;
            }else sum = 0;
        }
        cnt++;
        bus.pop();       
    }
    return cnt;
}
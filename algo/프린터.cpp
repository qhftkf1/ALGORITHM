#include<bits/stdc++.h>

using namespace std;

int solution(vector<int> priorities, int location) {
    int n = priorities.size();
    int cnt = 0;
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++) {
        if (i == location)
            q.push({ priorities[i], 1 });
        else
            q.push({ priorities[i], 0 });
    }

    while (q.size()) {
        int a, b;
        int flag = 0;
        tie(a, b) = q.front();
        q.pop();
        int t = q.size();
        
        queue<pair<int, int>> tmp_q;
        for (int i = 0; i < t; i++) {
            if (a < q.front().first) flag = 1;
            tmp_q.push(q.front());
            q.pop();
        }   
        if (flag == 1)
            tmp_q.push({ a, b });
        else {
            cnt++;
            if (b == 1)break;
        }
        q = tmp_q;
    }
    return cnt;
}
int main(void) {
    vector<int> pri = { 2, 1, 3, 2 };
    int loc = 2;
    cout << solution(pri, loc);
}
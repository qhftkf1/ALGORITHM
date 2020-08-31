#include <bits/stdc++.h>

using namespace std;
const int MAX = 2e5 + 1;
int visited[MAX];
vector<int> adj[MAX];
map<int, int> ma, marev;
void dfs(int height) {
    if (visited[height])
        return;
    if (ma[height] && !visited[ma[height]]) {
        marev[ma[height]] = height;
        return;
    }
    visited[height] = 1;
    if (marev[height]) {
        dfs(marev[height]);
    }
    for (int next_value : adj[height]) dfs(next_value);
}

bool solution(int n, vector<vector<int>> path, vector<vector<int>> order) {
    bool answer = true;
    
    for (auto v : path) {
        adj[v[0] + 1].push_back(v[1] + 1);
        adj[v[1] + 1].push_back(v[0] + 1);
    }
    
    for (int i = 0; i < order.size(); i++) {
        ma[order[i][1] + 1] = order[i][0] + 1;
    }
    dfs( 1);
    for (int i = 1; i < n + 1; i++) {
        if (visited[i] == 0) {
            answer = false;
            break;
        }
    }
    return answer;
}
int main(void) {
    vector<vector<int>> path = { {0,1},{0,3},{0,7},{8,1},{3,6},{1,2},{4,7},{7,5} };
    vector<vector<int>> order = {{8, 5}, {6, 7}, {4, 1}};
    cout << solution(9, path, order);
}
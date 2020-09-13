#include<bits/stdc++.h>
using namespace std;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int n;
int min_cnt = 2e9;
vector<vector<int>> maze_extend;
vector<vector<int>> visited;
void maze_dfs(int x, int y, int cnt) {
    if (x == n - 1 && y == n - 1) {
        if(min_cnt > cnt)
            min_cnt = cnt;
        return;
    }
    if (( x + 1 == n || y + 1 == n || maze_extend[y][x + 1] == 1 || maze_extend[y + 1][x + 1] == 1) && visited[y + 1][x] == 0) {
        visited[y + 1][x] = 1;
        maze_dfs(x, y + 1, cnt + 1);
        visited[y + 1][x] = 0;
    }
    else if (x - 1 == -1 || y - 1 == -1 || maze_extend[y][x - 1] == 1 || maze_extend[y - 1][x - 1] == 1 && visited[y - 1][x] == 0) {
        visited[y - 1][x] = 1;
        maze_dfs(x, y - 1, cnt + 1);
        visited[y - 1][x] = 0;
    }
    else if (y + 1 == n || x - 1 == - 1|| maze_extend[y + 1][x] == 1 || maze_extend[y + 1][x - 1] == 1 && visited[y][x - 1] == 0) {
        visited[y][x - 1] = 1;
        maze_dfs(x - 1, y, cnt + 1);
        visited[y][x - 1] = 0;
    }
    else if (y - 1 == -1 || x + 1 == n || maze_extend[y - 1][x] == 1 || maze_extend[y - 1][x + 1] == 1 && visited[y][x + 1] == 0) {
        visited[y][x + 1] = 1;
        maze_dfs(x + 1, y, cnt + 1);
        visited[y][x + 1] = 0;
    }
}
int solution(vector<vector<int>> maze) {
    int answer = 0;
    maze_extend = maze;
    n = maze.size();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            visited[i][j] = 0;
        }
    }
    maze_dfs(0, 0, 0);
    return min_cnt;
}

int main(void) {
    vector<vector<int>> maze = {{0, 1, 0, 1}, {0, 1, 0, 0}, {0, 0, 0, 0}, {1, 0, 1, 0}};
    cout << solution(maze);
}
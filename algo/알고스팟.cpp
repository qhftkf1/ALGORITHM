#include<bits/stdc++.h>
using namespace std;

int di_x[4] = { 0, 0, 1, -1 };
int di_y[4] = { 1, -1, 0, 0 };
int INF = 2E6 + 1;
int N, M;

void bfs(vector<vector <int>> wall) {
	queue<pair<int, int>> q;
	vector<vector<int>> dist(M, vector<int>(N, INF));
	q.push(make_pair(0, 0));
	dist[0][0] = 0;
	while (q.size()) {
		int x = q.front().first;
		int y = q.front().second;
		for (int i = 0; i < 4; i++) {
			int dx = x + di_x[i];
			int dy = y + di_y[i];
			if (dx >= 0 && dy >= 0 && dx < N && dy < M) {
				int dis = dist[y][x] + wall[dy][dx];
				if (dis < dist[dy][dx]) {
					dist[dy][dx] = dis;
					q.push({ dx, dy });
				}
			}
		}
		q.pop();
	}
	cout << dist[M - 1][N - 1];
}

 int main(void) {
	
	cin >> N >> M;
	vector<vector<int>> wall(M, vector<int>(N));
	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			scanf("%1d", &wall[i][j]);
		}
	}
	bfs(wall);
	
}
#include<bits/stdc++.h>

using namespace std;

const int INF = 2e9;
int wall[100][100], dist[100][100];
int dx[] = { 0, 0, 1, -1 };
int dy[] = { 1, -1, 0, 0 };
int N;
void bfs() {
	queue<pair<int, int>> q;
	q.push({ 0, 0 });
	while (q.size()) {
		int x, y;
		tie(x, y) = q.front();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx >= 0 && ny >= 0 && nx < N && ny < N) {
				int next_dist = dist[x][y] + wall[nx][ny];
				if (next_dist < dist[nx][ny]) {
					dist[nx][ny] = next_dist;
					q.push({ nx, ny });
				}
			}
		}
		q.pop();
	}

}
int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		scanf_s("%d", &N);
		memset(dist, INF, sizeof(dist));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				scanf_s("%1d", &wall[i][j]);
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				dist[i][j] = INF;
			}
		}
		bfs();
		cout << "#" << test_case << " " << dist[N - 1][N - 1] << "\n";
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
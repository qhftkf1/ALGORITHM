#include <bits/stdc++.h>

using namespace std;
int tmin;
int dx[] = { 1, -1, 0, 0 };
int dy[] = { 0, 0, 1, -1 };
int m;
int visited[26][26][5];
const int INF = 0x7f7f7f;
int ans = 2e9;
typedef struct loc {
	int x, y, di, corn, cnt;
};
void bfs(vector<vector<int>> board) {
	memset(visited, INF, sizeof(visited));
	queue<loc> q;
	q.push({ 0, 0 });

	while (q.size()) {
		loc t = q.front();
		int corner, cnt, di;
		q.pop();
		corner = t.corn; 
		cnt = t.cnt;
		di = t.di;
		int total = 500 * corner + 100 * cnt;
		if (t.x == m - 1 && t.y == m - 1) {
			ans = min(ans, total);
			continue;
		}
		for (int i = 0; i < 4; i++) {
			int nx = t.x + dx[i];
			int ny = t.y + dy[i];
			if (nx < 0 || ny < 0 || nx >= m || ny >= m || board[ny][nx] || visited[ny][nx][di] < total)
				continue;
			visited[ny][nx][di] = total;
			if (!di || di == i + 1)
				q.push({ nx, ny, i + 1, corner, cnt + 1 });
			else
				q.push({ nx, ny, i + 1, corner + 1, cnt + 1 });
		}
	}
}
int solution(vector<vector<int>> board) {
	m = board.size();
	bfs(board);
    return ans;
}
int main(void) {
	vector<vector<int>> board = { {0, 0, 0},{0, 0, 0},{0, 0, 0} };
	cout << solution(board);
}
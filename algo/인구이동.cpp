#include <bits/stdc++.h>

using namespace std;

int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };
int n;
int l, r;
int check[50][50];
vector<vector <int>> m;
map<int, int> ma;

struct country {
	int x, y, val;
};

void bfs(country cn,  int idx) {
	queue<country> q;
	int sum = 0, cnt = 0;
	q.push(cn);
	check[cn.y][cn.x] = idx;
	while (q.size()) {
		country c = q.front();
		sum += c.val;
		cnt++;
		for (int i = 0; i < 4; i++) {
			int nx = c.x + dx[i];
			int ny = c.y + dy[i];
			if (nx >= 0 && nx < n && ny >= 0 && ny < n && !check[ny][nx]) {
				int sub = abs(m[c.y][c.x] - m[ny][nx]);
				if (sub >= l && sub <= r) {
					check[ny][nx] = idx;
					q.push({ nx, ny, m[ny][nx] });
				}
			}
		}
		q.pop();
	}
	if (cnt > 1) ma[idx] = sum / cnt;
}

int main(void) {
	
	int cnt;

	cin >> n >> l >> r;
	m.resize(n);
	for (int i = 0; i < n; i++) {
		m[i].resize(n);
		for (int j = 0; j < n; j++) {
			cin >> m[i][j];
		}
	}

	cnt = 0;
	while (1){
		memset(check, 0, sizeof(check));
		ma.clear();
		int idx = 0;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (check[i][j] == 0) {
					country c;
					c.x = j; c.y = i; c.val = m[i][j];
					bfs(c, ++idx);
				}
			}                    
		}
		if (ma.empty())
			break;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (ma[check[i][j]])
					m[i][j] = ma[check[i][j]];
			}
		}
		cnt++;
	} 
	cout << cnt << "\n";
}
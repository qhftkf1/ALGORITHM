#include<bits/stdc++.h>

using namespace std;
int curve[101][101] = { 0, };
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
int g, d;
vector<int> dir;
void dfs(int cnt) {
	if (cnt == g) {
		return;
	}
		
	for (int i = dir.size() - 1; i >= 0; i--) {
		int idx = dir[i] + 1;
		if (idx == 4)idx = 0;
		dir.push_back(idx);
	}
	dfs(cnt + 1);
}
int main(void)
{
	int n;
	int tot = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		int x, y, d;
		vector<int> temp;
		dir = temp;
		scanf_s("%d %d %d %d", &x, &y, &d, &g);
		dir.push_back(d);
		curve[y][x] = 1;
		dfs(0);
		for (int i = 0; i < dir.size(); i++) {
			if (dir[i] == 0) 
				curve[y][++x] = 1;
			else if (dir[i] == 1) 
				curve[--y][x] = 1;
			else if (dir[i] == 2) 
				curve[y][--x] = 1;
			else
				curve[++y][x] = 1;
		}
	}

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (curve[i][j] && curve[i + 1][j] && curve[i][j + 1]  && curve[i + 1][j + 1])
				tot++;
		}
	}
	cout << tot << '\n';
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
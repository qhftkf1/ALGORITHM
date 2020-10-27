//#include<bits/stdc++.h>
//
//using namespace std;
//
//int dx[4] = { 1, -1, 0, 0 };
//int dy[4] = { 0, 0, -1, 1 };
//int n, m;
//int res;
//// R과 B 동시에 움직이기.
//// R과 B 따로 움직이기. 
//void dfs(char map[][10], pair<int, int> r_pos, pair<int, int> b_pos, int cnt) {
//	if (cnt > 10) {
//		if(res == 11)
//			res = -1;
//		return ;
//	}
//	if (map[r_pos.first][r_pos.second] == '0' && map[b_pos.first][b_pos.second] != '0') {
//		if (res == -1)
//			res = cnt;
//		else
//			res = min(res, cnt);
//		return;
//	}
//	else if(map[b_pos.first][b_pos.second] == '0'){
//		if (res == 11)
//			res = -1;
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		int rx = r_pos.first + dx[i];
//		int ry = r_pos.second + dy[i];
//		int bx = b_pos.first + dx[i];
//		int by = b_pos.second + dy[i];
//		if (rx >= 0 && rx < m && ry >= 0 && ry < n
//			&& bx >= 0 && bx < n && by >= 0 && by < n) {
//			if (map[ry][rx] != '#' && map[by][bx] != '#') {
//				while (!(map[ry][rx] == '#' || map[ry][rx] == '0')
//					&& !(map[by][bx] == '#' || map[by][bx] == '0')) {
//					rx += dx[i]; ry += dy[i];
//					bx += dx[i]; by += dy[i];
//				}
//				if (map[by][bx] == '#') {
//					by -= dy[i];
//					bx -= dx[i];
//				}
//				if (map[ry][rx] == '#') {
//					ry -= dy[i];
//					rx -= dx[i];
//				}
//				dfs(map, make_pair(rx, ry), make_pair(bx, by), cnt + 1);
//			}
//			else if (map[ry][rx] != '#') {
//				while (!(map[ry][rx] == '#' || map[ry][rx] == '0')) {
//					rx += dx[i]; ry += dy[i];
//				}
//				if (map[ry][rx] == '#') {
//					ry -= dy[i];
//					rx -= dx[i];
//				}
//				dfs(map, make_pair(rx, ry), b_pos, cnt + 1);
//			}
//			else if (map[by][bx] != '#') {
//				while (!(map[by][bx] == '#' || map[by][bx] == '0')) {
//					bx += dx[i]; by += dy[i];
//				}
//				if (map[by][bx] == '#') {
//					by -= dy[i];
//					bx -= dx[i];
//				}
//				dfs(map, r_pos, make_pair(bx, by), cnt + 1);
//			}
//		}
//
//	}
//}
//
//int main(void) {
//	char map[10][10];
//	pair<int, int> r_pos;
//	pair<int, int> b_pos;
//	res = 11;
//	cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> map[i][j];
//			if (map[i][j] == 'R')
//				r_pos = make_pair(j, i);
//			else if (map[i][j] == 'B')
//				b_pos = make_pair(j, i);
//		}
//	}
//	dfs(map, r_pos, b_pos, 0);
//	cout << res << '\n';
//}
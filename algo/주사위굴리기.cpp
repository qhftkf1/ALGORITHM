//#include<bits/stdc++.h>
//
//using namespace std;
//int dx[4] = { 1, -1, 0, 0 };
//int dy[4] = { 0, 0, -1, 1 };
//int dice_dir[7][4] = { {0, 0, 0, 0},
//						{3, 4, 2, 5},
//						{3, 4, 6, 1},
//						{6, 1, 2, 5},
//						{1, 6, 2, 5},
//						{3, 4, 1, 6},
//						{3, 4, 5, 2} };
//int dice[7] = { 0 };
//int main(void) {
//	int n, m, x, y, k;
//	int now;
//	cin >> n >> m >> x >> y >> k;
//	vector<vector<int>> board(n, vector<int>(m));
//	
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> board[i][j];
//		}
//	}
//	dice[6] = board[y][x];
//
//	now = 1;
//	int nx, ny;
//	for (int i = 0; i < k; i++) {
//		int dir;
//		
//		cin >> dir;
//		if (dir - 1 == 0) {
//			nx = x + dx[0], ny = y + dy[0];
//			if (nx >= 0 && ny >= 0 && nx < m && ny < n) {
//				now = 7 - dice_dir[now][dir - 1];
//				if (board[ny][nx] == 0)
//					board[ny][nx] = dice[7 - now];
//				else {
//					dice[7 - now] = board[ny][nx];
//					board[ny][nx] = 0;
//				}
//				x = nx;
//				y = ny;
//			}
//		}else if (dir - 1 == 1) {
//			nx = x + dx[1], ny = y + dy[1];
//			if (nx >= 0 && ny >= 0 && nx < m && ny < n) {
//				now = 7 - dice_dir[now][dir - 1];
//				if (board[ny][nx] == 0)
//					board[ny][nx] = dice[7 - now];
//				else {
//					dice[7 - now] = board[ny][nx];
//					board[ny][nx] = 0;
//				}
//				x = nx;
//				y = ny;
//			}
//		}
//		else if (dir - 1 == 2) {
//			nx = x + dx[2], ny = y + dy[2];
//			if (nx >= 0 && ny >= 0 && nx < m && ny < n) {
//				now = 7 - dice_dir[now][dir - 1];
//				if (board[ny][nx] == 0)
//					board[ny][nx] = dice[7 - now];
//				else {
//					dice[7 - now] = board[ny][nx];
//					board[ny][nx] = 0;
//				}
//				x = nx;
//				y = ny;
//			}
//		}
//		else if (dir - 1 == 3) {
//			nx = x + dx[3], ny = y + dy[3];
//			if (nx >= 0 && ny >= 0 && nx < m && ny < n) {
//				now = 7 - dice_dir[now][dir - 1];
//				if (board[ny][nx] == 0)
//					board[ny][nx] = dice[7 - now];
//				else {
//					dice[7 - now] = board[ny][nx];
//					board[ny][nx] = 0;
//				}
//				x = nx;
//				y = ny;
//			}
//		}
//	
//		cout << dice[now] << "\n";
//	}
//}
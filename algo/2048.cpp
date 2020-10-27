//#include <bits/stdc++.h>
//
//using namespace std;
//
//int dx[4] = { 1, -1, 0, 0 };
//int dy[4] = { 0, 0, 1, -1 };
//int n;
//
//void dfs(int map[][20], int cnt) {
//	// 완료 조건
//	if (cnt == 5) {
//
//	}
//	// 방향을 잡기 위해서 설정
//	for (int i = 0; i < 4; i++) {
//		// 방향쪽으로 계속 가면서 같은 수는 더해줌 
//		if (i == 0) {
//			for (int j = 0; j < n; j++) {
//				int k, f;
//				k = n - 2;
//				f = n - 1;
//				while (k >= 0) {
//					while (map[j][f] == 0)
//						f--;
//					k = f - 1;
//					while (map[j][k] == 0)
//						k--;
//					if (map[j][f] == map[j][k]) {
//						map[j][f] = 2 * map[j][k];
//						f = k - 1;
//					}
//					else {
//						f = k;
//						k--;                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
//					}
//				}
//			}
//		}
//	}
//}
//
//int main(void) {
//	int map[20][20];
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			cin >> map[i][j];
//		}
//	}
//	
//}
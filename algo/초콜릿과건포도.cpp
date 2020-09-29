//#include<bits/stdc++.h>
//#include<iostream>
//
//using namespace std;
//void divide(int x_s, int y_s, int x_d, int y_d) {
//	if ()// 한 조각 남았을때
//		return choco[x_s][y_s];
//	else {
//		if ()// 짝수
//			cnt += divide(x_s, y_s, x_d / 2, y_d);
//			cnt += divide(x_d / 2, y_s, x_d, y_d);
//	}
//
//}
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int n, m;
//
//		cin >> n >> m;
//		vector<vector<int>> choco(n, vector<int>(m));
//
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				int input;
//				cin >> input;
//				choco[i][j] = input;
//			}
//		}
//		divide(0, 0, n - 1, m - 1);
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
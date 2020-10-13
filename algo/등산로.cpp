//#include<bits/stdc++.h>
//
//using namespace std;
//
//int dx[4] = { 0, 0, 1, -1 };
//int dy[4] = { 1, -1, 0, 0 };
//int n, k;
//int ret;
//int visited[8][8];
//int flag;
////visited 초기화
//void init_visited() {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			visited[i][j] = 0;
//		}
//	}
//}
////
//void dfs(vector<vector<int>> mnt, int x, int y, int len) {
//	if (ret < len)
//		ret = len;
//
//	for (int i = 0; i < 4; i++) {
//		int nx = x + dx[i];
//		int ny = y + dy[i];
//		if (nx >= 0 && nx < n && ny >= 0 && ny < n && visited[ny][nx] == 0) {
//			if (mnt[ny][nx] < mnt[y][x]) {
//				visited[ny][nx] = 1;
//				dfs(mnt, nx, ny, len + 1);
//				visited[ny][nx] = 0;
//			}
//			else {
//				for (int j = 1; j <= k; j++) { // 1 ~ k까지 마이너스가 될 수 있음
//					if (mnt[ny][nx] - j < mnt[y][x] && flag == 0) {
//						vector<vector<int>> tmp_mnt = mnt;
//						tmp_mnt[ny][nx] -= j;
//						visited[ny][nx] = 1;
//						flag = 1;
//						dfs(tmp_mnt, nx, ny, len + 1);
//						flag = 0;
//						visited[ny][nx] = 0;
//					}
//				}
//			}
//		}
//	}
//}
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//	/*
//	   아래의 freopen 함수는 input.txt 를 read only 형식으로 연 후,
//	   앞으로 표준 입력(키보드) 대신 input.txt 파일로부터 읽어오겠다는 의미의 코드입니다.
//	   //여러분이 작성한 코드를 테스트 할 때, 편의를 위해서 input.txt에 입력을 저장한 후,
//	   freopen 함수를 이용하면 이후 cin 을 수행할 때 표준 입력 대신 파일로부터 입력을 받아올 수 있습니다.
//	   따라서 테스트를 수행할 때에는 아래 주석을 지우고 이 함수를 사용하셔도 좋습니다.
//	   freopen 함수를 사용하기 위해서는 #include <cstdio>, 혹은 #include <stdio.h> 가 필요합니다.
//	   단, 채점을 위해 코드를 제출하실 때에는 반드시 freopen 함수를 지우거나 주석 처리 하셔야 합니다.
//	*/
//	//freopen("input.txt", "r", stdin);
//	cin >> T;
//	/*
//	   여러 개의 테스트 케이스가 주어지므로, 각각을 처리합니다.
//	*/
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int max_value = 0;
//		vector<vector<int>> mnt;
//		vector<pair<int, int>> str_pos;
//		
//		// 입력
//		cin >> n >> k;
//		ret = 0;
//		for (int i = 0; i < n; i++) {
//			vector<int> tmp;
//			int num;
//			for (int j = 0; j < n; j++) {
//				cin >> num;
//				tmp.push_back(num);
//				max_value = max(max_value, num);
//			}
//			mnt.push_back(tmp);
//		}
//
//		// 초기 시작값 찾아 넣기
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (max_value == mnt[i][j])
//					str_pos.push_back({ i, j }); // (y, x)
//			}
//		}
//		// dfs
//		for (auto a : str_pos) {
//			//visited 초기화
//			init_visited();
//			flag = 0;
//			visited[a.first][a.second] = 1;
//			dfs(mnt, a.second, a.first, 0);
//			visited[a.first][a.second] = 0;
//		}
//		printf("#%d %d\n", test_case, ret + 1);
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
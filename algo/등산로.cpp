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
////visited �ʱ�ȭ
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
//				for (int j = 1; j <= k; j++) { // 1 ~ k���� ���̳ʽ��� �� �� ����
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
//	   �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
//	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
//	   //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
//	   freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
//	   ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
//	   freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
//	   ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
//	*/
//	//freopen("input.txt", "r", stdin);
//	cin >> T;
//	/*
//	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
//	*/
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		int max_value = 0;
//		vector<vector<int>> mnt;
//		vector<pair<int, int>> str_pos;
//		
//		// �Է�
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
//		// �ʱ� ���۰� ã�� �ֱ�
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (max_value == mnt[i][j])
//					str_pos.push_back({ i, j }); // (y, x)
//			}
//		}
//		// dfs
//		for (auto a : str_pos) {
//			//visited �ʱ�ȭ
//			init_visited();
//			flag = 0;
//			visited[a.first][a.second] = 1;
//			dfs(mnt, a.second, a.first, 0);
//			visited[a.first][a.second] = 0;
//		}
//		printf("#%d %d\n", test_case, ret + 1);
//	}
//	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
//}
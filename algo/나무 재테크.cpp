//#include<bits/stdc++.h>
//
//using namespace std;
//
//int dx[8] = { 1, -1, 0, 0, 1, -1, 1, -1 };
//int dy[8] = { 0, 0, 1, -1, 1, -1, -1, 1 };
//
//int main(void) {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	int n, m, k; // n * n / m : ���� ���� / k : ����
//	int a[10][10]; // �߰��� ���
//	int store[10][10]; // ����Ǿ� �ִ� ���(5)
//	vector<int> tree[10][10]; // ���� ��ġ
//	int x, y, age;
//	int ans;
//	
//	cin >> n >> m >> k;
//	ans = m;
//	for (int i = 0; i < n; i++){
//		for (int j = 0; j < n; j++) {
//			cin >> a[i][j];
//			store[i][j] = 5;
//		}
//	}
//	for (int i = 0; i < m; i++) {
//		cin >> x >> y >> age;
//		x--; y--;
//		tree[x][y].push_back(age);
//	}
//	while (k--) {
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				if (tree[i][j].size()){
//					int sum = 0;
//					sort(tree[i][j].begin(), tree[i][j].end());
//					for (int k = 0; k < tree[i][j].size(); k++) {
//						//��, ����
//						// ����� ���̺��� ���� ��
//						int t_a = tree[i][k][k];
//						if (t_a > store[i][j]) {
//							int t = tree[i][j].size() - k;
//							while (t--) {
//								t_a = tree[i][j].back();
//								tree[i][j].pop_back();
//								sum += t_a / 2;
//								ans--;
//							}
//						}
//						else {
//							store[i][j] -= t_a;
//							tree[i][j][k]++;
//						}
//					}
//					store[i][j] += sum;
//				}
//			}
//		}
//		// ���� ,�ܿ�
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < n; j++) {
//				for (int k = 0; k < tree[i][j].size(); k++) {
//					if (tree[i][j][k] % 5 == 0) {
//						for (int l = 0; l < 8; l++) {
//							int nx = j + dx[l];
//							int ny = i + dy[l];
//							if (nx < 0 || nx >= n || ny < 0 || ny >= n)continue;
//							tree[ny][j].push_back(1);
//							ans++;
//						}
//					}
//				}
//				store[i][j] += a[i][j];
//			}
//		}
//	}
//	cout << ans << "\n";
//}	
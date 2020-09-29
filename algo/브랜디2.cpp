//#include <bits/stdc++.h>
//
//using namespace std;
//int mi_v;
//int min_line;
//int cnt;
//int n, m;
//int flag;
//void dfs(vector<vector<int>> path, int src, int cnt) {
//	if (cnt <  min_line) {
//		flag = 1; return;
//	}
//	if (mi_v < cnt)
//		return;
//	if (n == src) {
//		if(mi_v > cnt)
//			mi_v = cnt;
//		return;
//	}
//	for (int i = 1; i <= n; i++) {
//		if (src != i && path[src][i] != 0) {
//			dfs(path, i, cnt + path[src][i]);
//		}
//	}
//	
//}
//int main() {
//	flag = 0;
//	min_line = -101;
//
//	cin >> n >> m;
//	mi_v = m * (m - 1) * 101;
//	vector<vector<int>> path(n + 1);
//	for (int i = 1; i <= n; i++) {
//		vector<int> temp(n + 1);
//		path[i] = temp;
//	}
//	for (int i = 0; i < m; i++) {
//		int src, dest, value;
//		cin >> src >> dest >> value;
//		if (min_line > value)
//			min_line = value;
//		path[src][dest] = value;
//	}
//	dfs(path, 1, 0);
//	if (flag == 1) {
//		cout << "bug" << '\n';
//	}else
//		cout << mi_v << "\n";
//	return 0;
//}
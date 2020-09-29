//#include<bits/stdc++.h>
//
//using namespace std;
//int mid;
//int N;
//int min_value = 40001;
//void dfs(vector<vector<int>>& team_map, int idx, int cnt, vector<int> v) {
//	if (cnt == mid) {
//		int start = 0;
//		int link = 0;
//		for (int i = 0; i < v.size(); i++) {
//			for (int j = i + 1; j < v.size(); j++) 
//				start += team_map[v[i]][v[j]] + team_map[v[j]][v[i]];
//		}
//		// 나는 스타트 팀 구한 다음 링크 팀 구해서 빼주는 방식으로 진행했는데, 링크 팀 구하는 방식이 비효율적이라 생각.
//		vector<int> w;
//		for (int i = 0; i < N; i++) {
//			if (find(v.begin(), v.end(), i) == v.end()) {
//				w.push_back(i);
//			}
//		}
//		for (int i = 0; i < w.size(); i++) {
//			for (int j = i + 1; j < w.size(); j++)
//				link += team_map[w[i]][w[j]] + team_map[w[j]][w[i]];
//		}
//		min_value = min(min_value, abs(start - link));
//		vector<int> temp;
//		v = temp;
//		return;
//	}
//	for (int i = idx; i < N; i++) {
//		v.push_back(i);
//		dfs(team_map, i + 1, cnt + 1, v);
//		v.pop_back();
//	}
//}
//int main(void) {
//	
//	vector<int> v;
//	cin >> N;
//	mid = N / 2;
//	vector<vector<int>> team_map(N, vector<int>(N));
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> team_map[i][j];
//		}
//	}
//	dfs(team_map, 0, 0, v);
//	cout << min_value;
//}
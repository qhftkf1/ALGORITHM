#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> chik_road;
int dist[100][13] = { 0 };
int N, M;
int ans = 2e9;
vector<pair<int, int>> chi_loc;
vector<pair<int, int>> hou_loc;

void dfs(int idx, vector<int>& v) {
	if (M == v.size()) {
		int sum = 0;
		for (int i = 0; i < hou_loc.size(); i++) {
			int min_value = 2e9;
			for (int vv : v) {
				min_value = min(min_value, dist[i][vv]);
			}
			sum += min_value;
		}
		ans = min(ans, sum);
		return;
	}

	for (int i = idx; i < chi_loc.size(); i++) {
		v.push_back(i);
		dfs(i + 1, v);
		v.pop_back();
	}
}

int main(void) {

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			int input;
			cin >> input;
			if (input == 1) {
				hou_loc.push_back({ i, j });
			}
			else if (input == 2) {
				chi_loc.push_back({ i,j });
			}
		}
	}
	for (int i = 0; i < hou_loc.size(); i++) {
		for (int j = 0; j < chi_loc.size(); j++) {
			dist[i][j] = abs(chi_loc[j].first - hou_loc[i].first) + abs(chi_loc[j].second - hou_loc[i].second);
		}
	}
	vector<int> v;
	dfs(0, v);
	cout << ans;
}
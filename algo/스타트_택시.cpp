//#include<bits/stdc++.h>
//
//using namespace std;
//vector<vector<int>> taxi_map;
//map< pair<int, int>, pair<int, int>> ma;
//int dx[4] = { 0, -1, 1, 0 };
//int dy[4] = { -1, 0, 0, 1 };
//int n, m, fuel;
//int x, y;
//int min_cnt = 401;
//int visited_dfs[21][21] = { 0 };
//// 손님 태우고 목적지까지 가기
//void dfs(int arr_x, int arr_y, int cnt) {
//	if (x == arr_x && y == arr_y) {
//		if (min_cnt > cnt) 
//			min_cnt = cnt;
//		return;
//	}
//	if (min_cnt < cnt)
//		return;
//	visited_dfs[arr_x][arr_y] = 1;
//	for (int i = 0; i < 4; i++) {
//		int nx = arr_x + dx[i];
//		int ny = arr_y + dy[i];
//		if (nx >= 0 && ny >= 0 && nx < n && ny < n && taxi_map[ny][nx] == 0 && visited_dfs[nx][ny] == 0) {
//			dfs(nx, ny, cnt + 1);
//		}
//	}
//	visited_dfs[arr_x][arr_y] = 0;
//
//}
//// 손님 태우러 가기
//void bfs() {
//	queue<pair<int, int>> q;
//	int visited[21][21] = { 0 };
//	q.push({ x, y });
//
//	visited[y][x] = 1;
//	int cnt = 0;
//	while (q.size()) {
//		int t = q.size();
//		int q_x, q_y;
//		if (fuel == 0) {
//			fuel = -1;
//			return;
//		}
//		
//		for (int i = 0; i < t; i++) {
//			tie(q_x, q_y) = q.front();
//			visited[q_y][q_x] = 1;
//			if (ma.find({ q_x, q_y }) != ma.end()) {
//				x = ma[{q_x, q_y}].first;
//				y = ma[{q_x, q_y}].second;
//				min_cnt = 401;
//				memset(visited_dfs, 0, sizeof(visited_dfs));
//				dfs(q_x, q_y, 0);
//				fuel -= min_cnt;
//				if (fuel < 0) {
//					fuel = -1;
//					return;
//				}
//				ma.erase(ma.find({ q_x, q_y }));
//				return;
//			}
//			for (int j = 0; j < 4; j++) {
//				int nx = q_x + dx[j];
//				int ny = q_y + dy[j];
//				if (nx >= 0 && ny >= 0 && nx < n && ny < n && taxi_map[ny][nx] == 0 && visited[ny][nx] == 0) {
//					q.push({ nx, ny });
//				}
//			}
//			q.pop();
//		}
//		cnt++;
//		fuel--;
//	}
//	
//}
//
//int main(void) {
//	
//	int idx = 1;
//	cin >> n >> m >> fuel;
//
//	// making map
//	for (int i = 0; i < n; i++) {
//		vector<int> col;
//		for (int j = 0; j < n; j++) {
//			int input;
//			cin >> input;
//			col.push_back(input);
//		}
//		taxi_map.push_back(col);
//	}
//	cin >> y >> x;
//	// input data
//	for (int i = 0; i < m; i++) {
//		int x_s, y_s, x_d, y_d;
//		cin >> x_s >> y_s >> x_d >> y_d;
//		ma[{y_s - 1, x_s - 1}] = make_pair(y_d - 1, x_d - 1);
//	}
//	for (int i = 0; i < m; i++) {
//		bfs();
//		if (fuel == -1)
//			break;
//		fuel += 2 * min_cnt;
//	}
//	cout << fuel << endl;
//}
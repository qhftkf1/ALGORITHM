//#include<bits/stdc++.h>
//
//using namespace std;
//int arr[101][101] = { 0 };
//vector<int> max_row;
//vector<int> max_col;
//size_t col_size;
//size_t row_size;
//bool cmp(const pair<int, int>& a, const pair<int, int>& b) {
//	if (a.second == b.second) return a.first < b.first;
//	return a.second < b.second;
//}
////size_t max_row(vector<vector<int>>& arr) {
////	size_t max_size = 0;;
////	for (int i = 0; i < arr.size(); i++) {
////		max_size = max((size_t)max_size, arr[i].size());
////	}
////	return max_size;
////}
//void R() {
//	for (int i = 0; i < col_size; i++) {
//		map<int, int> ma;
//		for (int j = 0; j < row_size; j++) {
//			if (arr[i][j] == 0)
//				continue;
//			ma[arr[i][j]]++;
//		}
//
//		vector<pair<int, int>> tmp_arr;
//		for (auto it = ma.begin(); it != ma.end(); it++){
//			tmp_arr.push_back(make_pair(it->second, it->first));
//		}
//		sort(tmp_arr.begin(), tmp_arr.end());
//		int k;
//		k = 0;
//		for (auto num : tmp_arr) {
//			arr[i][k++] = num.second;
//			arr[i][k++] = num.first;
//		}
//		max_row.push_back(k);
//	}
//}
//void C() {
//	
//}
//int main(void) {
//	
//	size_t col_size;
//	size_t row_size;
//	int cnt;
//	
//	// 입력
//	int r, c, k;
//	
//	cin >> r >> c >> k;
//	for (int i = 0; i < 3; i++) {
//		for (int j = 0; j < 3; j++) {
//			cin >> arr[i][j];
//		}
//	}
//	// 각 행과 열에 가장 긴 길이를 넣어줘야 한다. 
//	
//	// 찾거나 100초를 넘기면 종료 
//	cnt = 0;
//	max_row.push_back(3);
//	max_col.push_back(3);
//	while (arr[r - 1][c - 1] != k && cnt <= 100) {
//		
//		// 행
//		col_size = *max_element(max_col.begin(), max_col.end());
//		max_col.erase(max_col.begin(), max_col.end());
//		// 열
//		row_size = *max_element(max_row.begin(), max_row.end());
//		max_row.erase(max_row.begin(), max_row.end());
//		
//		if (col_size >= row_size) {
//			R();
//		}
//		else { 
//			C();
//		}
//		cnt++;
//	}
//	printf("%d\n", cnt);
//}
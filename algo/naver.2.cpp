//#include<bits/stdc++.h>
//
//using namespace std;
//
//int find_pos(vector<vector<int>>& arr, int& p) {
//	int i;
//	for (i = 0; i <= p; i++) {
//		if (arr[p][i] != 101)
//			break;
//	}
//	return i;
//}
//vector<int> solution(vector<vector<int>> blocks) {
//	vector<int> answer;
//	vector<vector<int>> arr(blocks.size(), vector<int>(blocks.size(), 101));
//	for (int i = 0; i < blocks.size(); i++) {
//		arr[i][blocks[i][0]] = blocks[i][1];
//	}
//	for (int i = 1; i < blocks.size(); i++) {
//		int pos = find_pos(arr, i);
//		int left = pos - 1;
//		int right = pos + 1;
//		// 왼쪽 계산
//		while (left >= 0) {
//			arr[i][left] = arr[i - 1][left] - arr[i][left + 1];
//			--left;
//		}
//		// 오른쪽 계산 
//	
//		while (right <= i) {
//			arr[i][right] = arr[i - 1][right - 1] - arr[i][right - 1];
//			++right;
//		}
//	}
//	for (int i = 0; i < blocks.size(); i++) {
//		for (int j = 0; j < i + 1; j++) {
//			answer.push_back(arr[i][j]);
//		}
//	}
//	return answer;
//}
//
//int main(void) {
//	vector<vector<int>> blocks = { {0, 50}, {0, 22}, {2, 10}, {1, 4}, {4, -13} };
//	solution(blocks);
//}
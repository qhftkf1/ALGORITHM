#include<bits/stdc++.h>

using namespace std;
int main(void) {

	int N, M;
	int max_value = 0;
	cin >> N >> M;
	vector<vector<int>> arr(N, vector<int>(M));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int a;
			cin >> a;
			arr[i][j] = a;
		}
	}
	vector<int> max_list_col;
	vector<int> max_list_row;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (j + 3 < M)
				max_value = max(max_value, arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i][j + 3]);
			if (i + 3 < N)
				max_value = max(max_value, arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 3][j]);
			if (i + 1 < N && j + 1 < M)
				max_value = max(max_value, arr[i][j] + arr[i + 1][j] + arr[i][j + 1] + arr[i + 1][j + 1]);
			
			if (i + 2 < N && j + 1 < M) {
				int square = arr[i][j] + arr[i][j + 1] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1];

				max_list_col.push_back(square - arr[i][j + 1] - arr[i + 1][j + 1]);
				max_list_col.push_back(square - arr[i][j] - arr[i + 1][j]);

				max_list_col.push_back(square - arr[i + 1][j] - arr[i + 2][j]);
				max_list_col.push_back(square - arr[i + 1][j + 1] - arr[i + 2][j + 1]);

				max_list_col.push_back(square - arr[i][j + 1] - arr[i + 2][j]);
				max_list_col.push_back(square - arr[i][j] - arr[i + 2][j + 1]);

				max_list_col.push_back(square - arr[i][j] - arr[i + 2][j]);
				max_list_col.push_back(square - arr[i][j + 1] - arr[i + 2][j + 1]);
			}
			if (i + 1 < N && j + 2 < M) {
				int square = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 1][j + 2];

				max_list_row.push_back(square - arr[i + 1][j + 1] - arr[i + 1][j + 2]);
				max_list_row.push_back(square - arr[i][j + 1] - arr[i][j + 2]);

				max_list_row.push_back(square - arr[i][j] - arr[i][j + 1]);
				max_list_row.push_back(square - arr[i + 1][j] - arr[i + 1][j + 1]);

				max_list_row.push_back(square - arr[i][j] - arr[i + 1][j + 2]);
				max_list_row.push_back(square - arr[i + 1][j] - arr[i][j + 2]);

				max_list_row.push_back(square - arr[i + 1][j] - arr[i + 1][j + 2]);
				max_list_row.push_back(square - arr[i][j] - arr[i][j + 2]);
			}
		}
	}
	int max_col = *max_element(max_list_col.begin(), max_list_col.end());
	max_value = max(max_value, max_col);
	int max_row = *max_element(max_list_row.begin(), max_list_row.end());
	max_value = max(max_value, max_row);
	cout << max_value << "\n";
}
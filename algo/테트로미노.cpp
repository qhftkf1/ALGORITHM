#include<bits/stdc++.h>

using namespace std;

int main(void) {

	int N, M;
	cin >> N >> M;
	vector<vector<int>> arr(N, vector<int>(M));
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			int a;
			cin >> a;
			arr[i][j] = a;
		}
	}
	vector<int> max_list;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (j + 3 < M)
				max_list.push_back(arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i][j + 3]);
			if (i + 3 < N)
				max_list.push_back(arr[i][j] + arr[i + 1][j] + arr[i + 2][j] + arr[i + 3][j]);
			if (i + 1 < N && j + 1 < M)
				max_list.push_back(arr[i][j] + arr[i + 1][j] + arr[i][j + 1] + arr[i + 1][j + 1]);
			
			if (i + 2 < N && j + 1 < M) {
				int square = arr[i][j] + arr[i][j + 1] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1];

				max_list.push_back(square - arr[i][j + 1] - arr[i + 1][j + 1]);
				max_list.push_back(square - arr[i][j] - arr[i + 1][j]);

				max_list.push_back(square - arr[i + 1][j] - arr[i + 2][j]);
				max_list.push_back(square - arr[i + 1][j + 1] - arr[i + 2][j + 1]);

				max_list.push_back(square - arr[i][j + 1] - arr[i + 2][j]);
				max_list.push_back(square - arr[i][j] - arr[i + 2][j + 1]);

				max_list.push_back(square - arr[i][j] - arr[i + 2][j]);
				max_list.push_back(square - arr[i][j + 1] - arr[i + 2][j + 1]);
			}
			if (i + 1 < N && j + 2 < M) {
				int square = arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j] + arr[i + 1][j + 1] + arr[i + 1][j + 2];

				max_list.push_back(square - arr[i + 1][j + 1] - arr[i + 1][j + 2]);
				max_list.push_back(square - arr[i][j + 1] - arr[i][j + 2]);

				max_list.push_back(square - arr[i][j] - arr[i][j + 1]);
				max_list.push_back(square - arr[i + 1][j] - arr[i + 1][j + 1]);

				max_list.push_back(square - arr[i][j] - arr[i + 1][j + 2]);
				max_list.push_back(square - arr[i + 1][j] - arr[i][j + 2]);

				max_list.push_back(square - arr[i + 1][j] - arr[i + 1][j + 2]);
				max_list.push_back(square - arr[i][j] - arr[i][j + 2]);
			}
		}
	}
	int ans = *max_element(max_list.begin(), max_list.end());
	cout << ans << "\n";
}
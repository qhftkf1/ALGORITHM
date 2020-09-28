#include<bits/stdc++.h>

using namespace std;
vector<vector<int>> move_right(vector<vector<int>> wheel, int idx) {
	int tmp = wheel[idx][7];
	for (int i = 7; i >= 1; i--)
		wheel[idx][i] = wheel[idx][i - 1];
	wheel[idx][0] = tmp;
	return wheel;
}
vector<vector<int>> move_left(vector<vector<int>> wheel, int idx) {
	int tmp = wheel[idx][0];
	for (int i = 0; i < 7; i++)
		wheel[idx][i] = wheel[idx][i + 1];
	wheel[idx][7] = tmp;
	return wheel;
}
int main(void) {
	vector<vector<int>> wheel(4, vector<int>(8));
	int k;
	int ans;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 8; j++) {
			scanf_s("%1d", &wheel[i][j]);
		}
	}
	scanf_s("%d", &k);
	for (int i = 0; i < k; i++) {
		int num, dir;
		int mid;
		int wheel_dir[4] = { 0 };

		scanf_s("%d %d", &num, &dir);
		mid = num - 1;
		wheel_dir[mid] = dir;
		while (mid - 1 >= 0) {
			if (wheel[mid][6] != wheel[mid - 1][2]) {
				wheel_dir[mid - 1] = wheel_dir[mid] * -1;
			}
			else
				break;
			--mid;
		}
		mid = num - 1;
		while (mid + 1 < 4) {
			if (wheel[mid][2] != wheel[mid + 1][6])
				wheel_dir[mid + 1] = wheel_dir[mid] * -1;
			else
				break;
			++mid;
		}
		for (int j = 0; j < 4; j++) {
			if (wheel_dir[j] == 1)
				wheel = move_right(wheel, j);
			else if (wheel_dir[j] == -1)
				wheel = move_left(wheel, j);
		}
	}
	ans = 0;
	for (int i = 0; i < 4; i++) {
		if (wheel[i][0] == 1)
			ans += pow(2, i);
	}
	cout << ans;
}
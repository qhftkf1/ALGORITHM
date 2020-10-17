#include <bits/stdc++.h>

using namespace std;

int n;
int d[20][20];
int voter[20][20];
// (x, y), (x + 1, y - 1), ..., (x + d1, y - d1)
// (x, y), (x + 1, y + 1), ..., (x + d2, y + d2)
// (x + d1, y - d1), (x + d1 + 1, y - d1 + 1), ... (x + d1 + d2, y - d1 + d2)
// (x + d2, y + d2), (x + d2 + 1, y + d2 - 1), ..., (x + d2 + d1, y + d2 - d1)
void make_five_row() {
	int flag, left, right;

	for (int i = 0; i < n; i++) {
		flag = 0;
		for (int j = 0; j < n; j++) {
			if (d[i][j] == 5 && flag == 0) {
				flag = 1; left = j; right = j;
			}
			else if (d[i][j] == 5 && flag == 1){
				right = j; break;
			}
		}
		if (flag == 0)continue;
		for (int j = left + 1; j < right; j++) {
			d[i][j] = 5;
		}
	}
}

int make_five(int x, int y, int d1, int d2) {
	// (1)
	int i = 0;
	while (i <= d1) {
		int nx = x + i;
		int ny = y - i;
		if (nx < 0 || ny < 0 || nx > n || ny > n)return 0;
		d[nx][ny] = 5;
		i++;
	}
	// (2)
	i = 0;
	while (i <= d2){
		int nx = x + i;
		int ny = y + i;
		if (nx < 0 || ny < 0 || nx > n || ny > n)return 0;
		d[nx][ny] = 5;
		i++;
	}
	//(3)
	i = 0;
	while (i <= d2) {
		int nx = x + d1 + i;
		int ny = y - d1 + i;
		if (nx < 0 || ny < 0 || nx > n || ny > n)return 0;
		d[x + d1 + i][y - d1 + i] = 5;
		i++;
	}
	//(4)
	i = 0;
	while (i <= d1) {
		int nx = x + d2 + i;
		int ny = y + d2 - i;
		if (nx < 0 || ny < 0 || nx > n || ny > n)return 0;
		d[x + d2 + i][y + d2 - i] = 5;
		i++;
	}
	return 1;
}

void map_cpy(int dst[][20], int src[][20]) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			dst[i][j] = src[i][j];
		}
	}
}
int main(void) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int tmp[20][20];
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> voter[i][j];
		}
	}
	map_cpy(tmp, d);
	// 기준점 (0, 0) ~ (n - 1, n - 1)까지
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			for (int d1 = 1; d1 <= j - 1; d1++) {
				for (int d2 = 1; d2 <= n - j; d2++) {
					if (make_five(i, j, d1, d2)) {
						make_five_row();
						for (int i = 0; i < n; i++) {
							for (int j = 0; j < n; j++) {
								cout << d[i][j];
							}
							cout << "\n";
						}
					}
					else
						map_cpy(d, tmp);
				}
			}
		}
	}
}
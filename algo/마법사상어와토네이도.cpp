#include<iostream>

using namespace std;

int dx[10] = {-2, -1, 0, 0, 1, -1, -1, 0, 0, 1, };
int dy[10] = {0,-1, -1, -2, -1, 0, 1, 1, 2, 1};
int sail[501][501];
int n, x, y, k, cnt;

int LeftRight(int i, int j, int flag) {
	int val, sum, tot;
	int nx, ny;

	val = sail[i][j];
	sail[i][j] = 0;
	sum = 0;
	// 0부터
	nx = (dx[0] * flag) + j; ny = dy[0] + i;
	tot = (val * 5) / 100;
	if (nx >= 0 && ny >= 0 && nx < n && ny < n)
		sail[ny][nx] += (val * 5) / 100;
	else 
		sum += (val * 5) / 100;
	for (int m = 1; m < 10; m++) {
		nx = (dx[m] * flag) + j; ny = dy[m] + i;
		// 10%
		if (m % 5 == 1) {
			if (nx >= 0 && ny >= 0 && nx < n && ny < n)
				sail[ny][nx] += (val * 10) / 100;
			else
				sum += (val * 10) / 100;
			tot += (val * 10) / 100;
		}else if (m % 5 == 2) { // 7%
			if (nx >= 0 && ny >= 0 && nx < n && ny < n)
				sail[ny][nx] += (val * 7) / 100;
			else
				sum += (val * 7) / 100;
			tot += (val * 7) / 100;
		}
		else if (m % 5 == 3) { // 2%
			if (nx >= 0 && ny >= 0 && nx < n && ny < n)
				sail[ny][nx] += (val * 2) / 100;
			else
				sum += (val * 2) / 100;
			tot += (val * 2) / 100;
		}else if (m % 5 == 4) { // 1%
			if (nx >= 0 && ny >= 0 && nx < n && ny < n)
				sail[ny][nx] += (val * 1) / 100;
			else
				sum += (val * 1) / 100;
			tot += (val * 1) / 100;
		}
	}
	// 마지막 나머지
	nx = (dx[5] * flag) + j; ny = dy[5] + i;
	if (nx >= 0 && ny >= 0 && nx < n && ny < n)
		sail[ny][nx] += (val - tot);
	else
		sum += (val - tot);
	return sum;
}
int UpDown(int i, int j, int flag) {
	int val, sum, tot;
	int nx, ny;

	val = sail[i][j];
	sail[i][j] = 0;
	sum = 0;
	// 5%
	nx = j + dy[0]; ny = i + (dx[0] * flag);
	if (nx >= 0 && ny >= 0 && nx < n && ny < n)
		sail[ny][nx] += (val * 5) / 100;
	else
		sum += (val * 5) / 100;
	tot = ((val * 5) / 100);
	for (int m = 1; m < 10; m++) {
		 nx = dy[m] + j; ny = (dx[m] * flag) + i;
		// 10%
		if (m % 5 == 1) {
			if (nx >= 0 && ny >= 0 && nx < n && ny < n)
				sail[ny][nx] += (val * 10) / 100;
			else
				sum += (val * 10) / 100;
			tot += ((val * 10) / 100);
		}
		else if (m % 5 == 2) { // 7%
			if (nx >= 0 && ny >= 0 && nx < n && ny < n)
				sail[ny][nx] += (val * 7) / 100;
			else
				sum += (val * 7) / 100;
			tot += ((val * 7) / 100);
		}
		else if (m % 5 == 3) { // 2%
			if (nx >= 0 && ny >= 0 && nx < n && ny < n)
				sail[ny][nx] += (val * 2) / 100;
			else
				sum += (val * 2) / 100;
			tot += ((val * 2) / 100);
		}
		else if (m % 5 == 4) { // 1%
			if (nx >= 0 && ny >= 0 && nx < n && ny < n)
				sail[ny][nx] += ((val * 1) / 100);
			else
				sum += ((val * 1) / 100);
			tot += ((val * 1) / 100);
		}
	}
	// 마지막 나머지
	nx = dy[5] + j; ny = (dx[5] * flag) + i;
	if (nx >= 0 && ny >= 0 && nx < n && ny < n)
		sail[ny][nx] = sail[ny][nx] + (val - tot);
	else
		sum += (val - tot);
	return sum;
}

int main(void) {
	int ans;

	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> sail[i][j];
		}
	}
	ans = 0;
	x = (n - 1) / 2; y = (n - 1) / 2; k = 1; cnt = (n - 1) / 2;
	while (cnt--) {
		////left
		x -= 1;
		ans += LeftRight(y, x, 1);
		for (int t = 0; t < k; t++) {
			//down
			y += 1;
			ans += UpDown(y, x, -1);
		}
		k++;
		for (int t = 0; t < k; t++) {
			//right
			x += 1;
			ans += LeftRight(y, x, -1);
		}
		for (int t = 0; t < k; t++) {
			//up
			y -= 1;
			ans += UpDown(y, x, 1);
		}
		for (int t = 0; t < k; t++) {
			//left
			x -= 1;
			ans += LeftRight(y, x, 1);
		}
		k++;
	}
	cout << ans << "\n";
}
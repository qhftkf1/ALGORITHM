#include<bits/stdc++.h>

using namespace std;
int res;
vector<vector<int>> arr(8, vector<int>(8));
void right_check(int x, int y,int n){
	int left, right;
	left = x;
	right = x + n - 1;
	while (left <= right) {
		if (arr[y][left] != arr[y][right])
			break;
		left++;
		right--;
	}
	if (left > right)
		res++;
}

void down_check(int x, int y, int n) {
	int down, up;
	down = y;
	up = y + n - 1;
	while (down <= up) {
		if (arr[down][x] != arr[up][x])
			break;
		down++;
		up--;
	}
	if (down > up)
		res++;
}
int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	T = 10;
	
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int n;
		char input;
		res = 0;
		cin >> n;
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				cin >> input;
				arr[i][j] = input;
			}
		}
		for (int i = 0; i < 8; i++) {
			for (int j = 0; j < 8; j++) {
				if (i + n - 1 < 8) {
					down_check(j, i, n);
				}
				if (j + n - 1 < 8) {
					right_check(j, i, n);
				}
			}
		}
		cout << "#" << test_case << " " << res << "\n";
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
			 이 부분에 여러분의 알고리즘 구현이 들어갑니다.
		 */
		 /////////////////////////////////////////////////////////////////////////////////////////////


	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
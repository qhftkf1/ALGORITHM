#include<bits/stdc++.h>
// 그리디
using namespace std;
int N, M;


int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		cin >> N >> M;
		string res = "YES";
		vector<vector<int>> grass(N, vector<int>(M));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> grass[i][j];
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				int flag = 0;
				for (int k = 0; k < M; k++) {
					if (grass[i][j] < grass[i][k]) {
						flag = 1;
						break;
					}
				}
				if (flag == 1) {
					for (int l = 0; l < N; l++) {
						if (grass[i][j] < grass[l][j]) {
							goto END;
						}
					}
				}
			}
		}

		cout << "#" << test_case << " " << res <<"\n";
		continue;
	END: {
		cout << "#" << test_case << " NO" << "\n";
	}
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
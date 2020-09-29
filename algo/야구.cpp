#include<bits/stdc++.h>

using namespace std;

int main(void) {
	int n;
	int out;
	int ans = 0;
	int inn_score[50][9];
	vector<int> hitter = { 0, 1, 2, 3, 4, 5, 6, 7, 8 };
	vector<int> base(4);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> inn_score[i][j];
		}
	}

	do {
		if (hitter[3] != 0)continue;
		int total = 0;
		int j = 0;
		for (int i = 0; i < n; i++) {
			out = 0;
			for (int k = 1; k < 4; k++)base[k] = 0;
			while (out != 3) {
				int score = inn_score[i][hitter[j]];
				if (score != 0) {
					for (int t = 3; t > 0; t--) {
						if (base[t] == 0)continue;
						if (t + score > 3)total++;
						else base[t + score] = 1;
						base[t] = 0;
					}
					if (score == 4)
						total++;
					else
						base[score] = 1;
				}
				else
					out++;
				j++;
				if (j == 9)
					j = 0;
			}
		}
		ans = max(ans, total);
	} while (next_permutation(hitter.begin(), hitter.end()));
	cout << ans;
}
//
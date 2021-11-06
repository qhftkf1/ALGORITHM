#include<iostream>
#include<vector>
using namespace std;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { -1, 0, 1, 0 };
int main() {
	int R, C, N;
	int t;
	vector<vector<int>> boomMap;
	cin >> R >> C >> N;

 	for (int i = 0; i < R; i++) {
		vector<int> tmp;
		for (int j = 0; j < C; j++) {
			char input;
			cin >> input;
			if (input == '.') tmp.push_back(0);
			else tmp.push_back(1);
		}
		boomMap.push_back(tmp);
	}
	t = 1;
	while (t <= N) {
		if (t % 2 == 0) {
			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {
					boomMap[i][j]++;
				}
			}
		}
		else {
			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {
					if (boomMap[i][j] == 3) {
						boomMap[i][j] = 0;
						for (int dir = 0; dir < 4; dir++) {
							int nx = j + dx[dir];
							int ny = i + dy[dir];
							if (nx >= 0 && nx < C && ny >= 0 && ny < R) {
								boomMap[ny][nx] = 0;
							}
						}
					}
				}
			} 
			for (int i = 0; i < R; i++) {
				for (int j = 0; j < C; j++) {
					if (boomMap[i][j] != 0) boomMap[i][j]++;
				}
			}
		}
		t++;
	}
	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			cout << boomMap[i][j];
		}
		cout << "\n";
	}

}
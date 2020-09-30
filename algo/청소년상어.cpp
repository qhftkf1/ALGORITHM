//#include <bits/stdc++.h>
//
//using namespace std;
//int ocean[4][4] = { 0 };
//int dx[8] = { 0, -1, -1, -1, 0, 1, 1, 1 };
//int dy[8] = { -1, -1, 0, 1, 1, 1, 0, -1 };
//map <int, pair<int, int>> fish_num;
//map <int, int> fish_dir;
//int tot_max = 0;
//// ��� �̵��� dfs ����
//void dfs(int x, int y, int idx, int tot) {
//	// �� ���� ����� ����� ����Ʈ, ���� ����Ʈ, �ٴ� �ʿ��� ����
//	fish_num.erase(ocean[y][x]);
//	fish_dir.erase(ocean[y][x]);
//	ocean[y][x] = 17;
//	// ����� �̵�
//	for (auto iter = fish_num.begin(); iter != fish_num.end(); iter++) {
//		int fx, fy; tie(fx, fy) = iter->second;
//		int eight = fish_dir[iter->first];
//		int fdx, fdy;
//		for (int j = 0; j < 8; j++) {
//			fdx = fx + dx[eight]; fdy = fy + dy[eight];
//			if (fdx >= 0 && fdy >= 0 && fdx < 4 && fdy < 4 && ocean[fdy][fdx] != 17)
//				break;
//			eight++;
//			if (eight == 8)
//				eight = 0;
//		}
//		// �� ���� ���� ��� �ٲ��� �ʰ� ���� ����� ����
//		if (fdx == fx && fdy == fy)
//			continue;
//		//���� num ������ nx, ny�� �ִ� ������ �ٲ���(�� �ٲ���� �Ѵ�)
//		swap(fish_num[ocean[fdy][fdx]], fish_num[iter->first]); // ����� ��ġ �ٲ���
//		swap(ocean[fdy][fdx], ocean[fy][fx]); // ����� �ѹ� �ٲ��� 
//		swap(fish_dir[ocean[fdy][fdx]], fish_dir[iter->first]); // ����� ���� �ٲ��� 
//	}
//	
//	for (int i = 1; i < 4; i++) {
//		int nx = x + dx[idx] * i;
//		int ny = y + dy[idx] * i;
//		if (nx < 0 || ny < 0 || nx >= 4 || ny >= 4 || ocean[ny][nx] == 17) {
//			tot_max = max(tot_max, tot);
//			return;
//		}
//		else{
//			dfs(nx, ny, fish_dir[ocean[ny][nx]], tot + ocean[ny][nx]);
//		}
//	}
//}
//int main(void) {
//	int num, dir;
//	int tot = 0;
//	pair<int, int> shark;
//	int shark_dir;
//	for (int i = 0; i < 4; i++) {
//		for (int j = 0; j < 4; j++) {
//			cin >> num >> dir;
//			fish_num[num] = make_pair( j, i );
//			fish_dir[num] = dir - 1;
//			ocean[i][j] = num;
//		}
//
//	}
//	//ù��° ���� �ۿ��� 
//	shark_dir = fish_dir[ocean[0][0]];
//	shark = make_pair(0, 0);
//	tot += ocean[0][0];
//	fish_num.erase(ocean[0][0]);
//	fish_dir.erase(ocean[0][0]);
//	
//	dfs(0, 0, shark_dir, tot);
//	cout << tot_max << '\n';
//}
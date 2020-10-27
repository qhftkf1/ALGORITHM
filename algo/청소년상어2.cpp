//#include<bits/stdc++.h>
//
//using namespace std;
//
//struct FISH {
//	int y, x;
//	int dir;
//};
//
//int move_y[8] = { -1, -1, 0, +1, +1, +1, 0, -1 };
//int move_x[8] = { 0, -1, -1, -1, 0, +1, +1, +1 };
//int ret;
//
//// 상어의 이동 (DFS)
//void move_shark(int fish_map[4][4], FISH fish[], int shark_x, int shark_y, int sum) {
//	int temp_map[4][4];
//	FISH temp_fish[16];
//	for (int y = 0; y < 4; ++y) {
//		for (int x = 0; x < 4; ++x) {
//			temp_map[y][x] = fish_map[y][x];
//		}
//	}
//	for (int i = 0; i < 16; ++i) {
//		temp_fish[i] = fish[i];
//	}
//	// 냠냠
//	int fish_number = temp_map[shark_y][shark_x];
//	int shark_dir = temp_fish[fish_number].dir;
//	temp_fish[fish_number].x = -1;
//	temp_fish[fish_number].y = -1;
//	temp_fish[fish_number].dir = -1;
//	temp_map[shark_y][shark_x] = -1;
//
//
//	sum += (fish_number + 1);
//	if (ret < sum) ret = sum;
//	// 물고기의 이동
//	for (int i = 0; i < 16; ++i) {
//		if (temp_fish[i].y == -1)
//			continue;
//		int cy = temp_fish[i].y;
//		int cx = temp_fish[i].x;
//		int cd = temp_fish[i].dir;
//
//		int ny = cy + move_y[cd];
//		int nx = cx + move_x[cd];
//		int nd = cd;
//
//		while (ny < 0 || ny >= 4 || nx < 0 || nx >= 4 || (ny == shark_y && nx == shark_x)) {
//			nd = (nd + 1) % 8;
//			ny = cy + move_y[nd];
//			nx = cx + move_x[nd];
//		}
//		if (temp_map[ny][nx] != -1) {
//			int target = temp_map[ny][nx];
//			temp_fish[target].y = cy;
//			temp_fish[target].x = cx;
//			temp_fish[i].y = ny;
//			temp_fish[i].x = nx;
//			temp_fish[i].dir = nd;
//
//			temp_map[ny][nx] = i;
//			temp_map[cy][cx] = target;
//		}
//		else {
//			temp_fish[i].y = ny;
//			temp_fish[i].x = nx;
//			temp_fish[i].dir = nd;
//			
//			temp_map[ny][nx] = i;
//			temp_map[cy][cx] = -1;
//		}
//	}
//
//
//	//상어 이동
//	for (int i = 1; i < 4; ++i) {
//		int nx = shark_x + move_x[shark_dir] * i;
//		int ny = shark_y + move_y[shark_dir] * i;
//		if (nx < 0 || nx >= 4 || ny < 0 || ny >= 4)
//			break;
//		if (temp_map[ny][nx] != -1)
//			move_shark(temp_map, temp_fish, nx, ny, sum);
//	}
//
//}
//
//int main(void) {
//	int num, dir;
//	FISH fish[16];
//	int fish_map[4][4] = { 0 };
//
//	for (int y = 0; y < 4; ++y) {
//		for (int x = 0; x < 4; ++x) {
//			cin >> num >> dir;
//			--num; --dir;
//			fish[num].y = y;
//			fish[num].x = x;
//			fish[num].dir = dir;
//			fish_map[y][x] = num;
//		}
//	}
//	ret = 0;
//	move_shark(fish_map, fish, 0, 0, 0);
//	printf("%d\n", ret);
//	return 0;
//
//}
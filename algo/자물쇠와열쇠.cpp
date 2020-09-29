//#include <bits/stdc++.h>
//
//using namespace std;
//int n, m;
//int target;
//
//vector<vector<int>> rotate(vector<vector<int>> key) {
//    vector<vector<int>> temp = key;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            temp[j][n - i - 1] = key[i][j];
//        }
//    }
//    return temp;
//}
//bool compare(vector<vector<int>> key, vector<vector<int >> lock, int x, int y) {
//    int cnt;
//
//    cnt = 0;
//    for (int i = 0; i < n; i++) {
//        for (int j = 0; j < n; j++) {
//            if (x + j < 0 || y + i < 0 || x + j >= m || y + i >= m)continue;
//            if (key[i][j])
//                if (lock[y + i][x + j])
//                    return false;
//                else
//                    cnt++;
//        }
//    }
//    return target == cnt;
//}
//bool solution(vector<vector<int>> key, vector<vector<int>> lock) {
//    target = 0;
//    n = key.size();
//    m = lock.size();
//    for (int i = 0; i < m; i++) {
//        for (int j = 0; j < m; j++) {
//            if (lock[i][j] == 0 )
//                target++;
//        }
//    }
//    for (int i = -n + 1; i < m; i++) {
//        for (int j = -n + 1; j < m; j++) {
//            for (int t = 0; t < 4; t++) {
//                if (compare(key, lock, j, i))
//                    return true;
//                key = rotate(key);
//            }
//        }
//    }
//    return false;
//}
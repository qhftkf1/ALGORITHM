#include <bits/stdc++.h>

using namespace std;
int MOD = 20170805;
int dp[500][500];
int go(vector<vector<int>>& city_map, int x, int y) {
    if (city_map[y][x] == 1)return 0;
    int left, up;
    int& ret = dp[y][x];
    if (ret != -1)return ret;
    ret = left = up = 0;
    for (int i = x - 1; i >= 0; i--) {
        if (city_map[y][i] == 2)continue;
        left = go(city_map, i, y);
    }
    for (int j = y - 1; j >= 0; j--) {
        if (city_map[j][x] == 2)continue;
        up = go(city_map, x, j);
    }
    ret += left % MOD;
    ret += up % MOD;
    return ret;
}
int solution(int n, int m, vector<vector<int>> city_map) {
    memset(dp, -1, sizeof(dp));
    dp[0][0] = 1;
    return go(city_map, m - 1, n - 1);
}
int main(void) {
    vector<vector<int>> map = { {0, 0, 0},
                                {0, 0, 0},
                                {0, 0, 0} };
    cout << solution(3, 3, map);
}
#include<bits/stdc++.h>

using namespace std;

int solution(int m, int n, vector<vector<int>> puddles) {
    int answer = 0;
    vector<vector<int>> map(n, vector<int>(m, 0));
    vector<vector<int>> dp(n, vector<int>(m, 0));
    for (int i = 0; i < puddles.size(); i++) {
        map[puddles[i][1] - 1][puddles[i][0] - 1] = 1;
    }
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (map[i][j] == 1)
                continue;
            if (i - 1 >= 0 && map[i - 1][j] != 1)
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % 1000000007;
            if (j - 1 >= 0 && map[i][j - 1] != 1)
                dp[i][j] = (dp[i][j] +  dp[i][j - 1]) % 1000000007;
        }
    }
    return dp[n - 1][m - 1];
}
int main(void) {
    vector<vector<int>> puddles{ {2, 2} };
    cout << solution(4, 3, puddles);
}
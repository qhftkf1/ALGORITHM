//#include<bits/stdc++.h>
//
//using namespace std;
//
//int rcnt;
//int ans;
//int dp[11];
//
//void dfs(int cnt, string s) {
//	if (!cnt) {
//		ans = max(ans, stoi(s));
//		return;
//	}
//	int& ret = dp[cnt];
//	if (ret > stoi(s)) return;
//	ret = stoi(s);
//	for (int i = 0; i < s.size(); i++) {
//		for (int j = i + 1; j < s.size(); j++) {
//			swap(s[i], s[j]);
//			dfs(cnt - 1, s);
//			swap(s[i], s[j]);
//		}
//	}
//}
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//
//	cin >> T;
//
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		string s;
//		cin >> s >> rcnt;
//		ans = 0;
//		memset(dp, 0, sizeof(dp));
//		dfs(rcnt, s);
//	
//		cout << "#" << test_case << " " << ans << "\n";
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
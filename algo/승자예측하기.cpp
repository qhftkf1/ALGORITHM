//#include<bits/stdc++.h>
//
//using namespace std;
//
//string s[2] = { "Alice", "Bob" };
//
//int main(int argc, char** argv)
//{
//	int test_case;
//	int T;
//
//	cin >> T;
//	for (test_case = 1; test_case <= T; ++test_case)
//	{
//		string ans = "";
//		long long N;
//		scanf("%llu", &N);
//		while (N > 3) {
//			N = N / 2 + 1;
//			N = N / 2 - 1;
//		}
//		if (N == 1)
//			ans = s[1];
//		else
//			ans = s[0];
//		cout << "#" << test_case << " " << ans << "\n";
//	}
//	return 0;//정상종료시 반드시 0을 리턴해야합니다.
//}
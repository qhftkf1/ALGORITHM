//#include <bits/stdc++.h>
//
//using namespace std;
//
//int solution(int N, int number) {
//    int answer = 0;
//    int flag = 0;
//    int i;
//    int p_f = 1;
//    vector<int> dp(32000);
//    dp[0] = 0;
//    dp[1] = 2;
//    dp[11] = 3;
//    dp[111] = 4;
//    dp[1111] = 5;
//    dp[11111] = 6;
//    if (N == 1)
//        return number;
//    for (i = 1; i <= number; i++) {
//        if (i % N == 0) {
//            if (i / N == 11)
//                dp[i] = 2;
//            else if (i / N == 111)
//                dp[i] = 3;
//            else if (i / N == 1111)
//                dp[i] = 4;
//            else if (i / N == 11111)
//                dp[i] = 5;
//            else if (pow(N, p_f) == i) {
//                dp[i] = p_f;
//                p_f++;
//            }
//            else dp[i] = min(i / N, dp[flag] + dp[i - flag]);
//            flag = i;
//        }
//        else if (i >= 2 && i < N) {
//            dp[i] = dp[i - 1] + 1;
//        }
//        else if (i > N && i < 11) {
//            dp[i] = min(dp[flag] + dp[i - flag], dp[1] + dp[i - 1]);
//        }
//        else if (i >= 11 && i < 111) {
//            if (i >= 12 && i <= 14)
//                dp[i] = dp[i - 1] + 1;
//            else
//                dp[i] = min(dp[flag] + dp[i - flag], dp[11] + dp[i - 11]);
//        }
//        else if (i >= 111 && i < 1111) {
//            if (i >= 112 && i <= 114)
//                dp[i] = dp[i - 1] + 1;
//            else
//                dp[i] = min(dp[flag] + dp[i - flag], dp[11] + dp[i - 111]);
//        }
//        else if (i >= 1111 && i < 11111) {
//            if (i >= 1112 && i <= 1114)
//                dp[i] = dp[i - 1] + 1;
//            else
//                dp[i] = min(dp[flag] + dp[i - flag], dp[11] + dp[i - 1111]);
//        }
//        else if (i >= 11111) {
//            if (i >= 11112 && i <= 11114)
//                dp[i] = dp[i - 1] + 1;
//            else
//                dp[i] = min(dp[flag] + dp[i - flag], dp[11] + dp[i - 11111]);
//        }
//
//    }
//    if (dp[number] > 8)
//        return -1;
//    return dp[number];
//}
//int main(void) {
//    for (int i = 1; i < 126; i++) {
//        cout << i  << "¹ø " << solution(3, i) << endl;
//    }
//
//}
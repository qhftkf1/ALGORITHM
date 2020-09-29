//#include <bits/stdc++.h>
//using namespace std;
//string base = "0123456789ABCDEF";
//string fn_base_to_string(int num, int n) {
//    string res;
//    while (num != 0) {
//        res += base[num % n];
//        num /= n;
//    }
//    reverse(res.begin(), res.end());
//    return res;
//}
//string solution(int n, int t, int m, int p) {
//    string answer = "0";
//    string s = "";
//    int i, r;
//    i = 1;
//    while (i < t * m) {
//        answer += fn_base_to_string(i, n);
//        i++;
//    }
//    p--;
//    i = 0;
//    r = 0;
//    while (i < t) {
//        s += answer[p + (m * r)];
//        r++;
//        i++;
//    }
//    return s;
//}
//
//int main(void) {
//    cout << solution(2, 4, 2, 1);
//}
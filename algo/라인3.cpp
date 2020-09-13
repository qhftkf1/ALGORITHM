//#include<bits/stdc++.h>
//
//using namespace std;
//
//int min_cnt = 2e9;
//string res = "";
//void make_first_digit(string s, int cnt) {
//    if (s.size() == 1 && min_cnt > cnt) {
//        min_cnt = cnt;
//        res = s;
//        return;
//    }
//    for (int i = 1; i < s.size(); i++) {
//        if (s.substr(0, i)[0] == '0' || s.substr(i, s.size() - i)[0] == '0')
//            continue;
//        int num = stoi(s.substr(0, i)) + stoi(s.substr(i, s.size() - i));
//        make_first_digit(to_string(num), cnt + 1);
//    }
//}
//vector<int> solution(int n) {
//    vector<int> answer;
//    make_first_digit(to_string(n), 0);
//    answer.push_back(min_cnt);
//    answer.push_back(stoi(res));
//    return answer;
//}
//int main(void) {
//    vector<int> ans = solution(73425);
//}
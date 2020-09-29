//#include <bits/stdc++.h>
//using namespace std;
//
//// cards ´Â 100°³
//// value ´Â 10000
//// cards { 1 }
//// value = 10000
//
//int min_count;
//int res;
//void dfs(vector<int> cards, int target, int cnt) {
//    if (min_count < cnt || target > res)
//        return;
//    if (res == target) {
//        if (min_count > cnt)
//            min_count = cnt;
//    }
//    for (int i = 0; i < cards.size(); i++) {
//        if(target + cards[i] <= res)
//        dfs(cards, target + cards[i], cnt + 1);
//    }
//}
//int bfs(int num, vector<int> cards) {
//    pair<int, int> tmp;
//    queue<int> q;
//    int cnt;
//
//    cnt = 1;
//    for (int a : cards) {
//        if (a == num)
//            return cnt;
//        q.push(a);
//    }
//    while (q.size()) {
//        int t = q.size();
//        cnt++;
//        for (int i = 0; i < t; i++) {
//            int val = q.front();
//            q.pop();
//            for (int a : cards) {
//                if (val + a == num) {
//                    return cnt;
//                }
//                if (val + a <= num)
//                    q.push(val + a);
//            }
//        }
//    }
//    return min_count;
//}
//int solution(int num, vector<int> cards) {
//    int answer = 0;
//
//    min_count = 10001;
//    min_count = bfs(num, cards);
//    if(min_count == 10001)
//        min_count = -1;
//    return min_count;
//}
///*
// dp[i]
//*/
//int main(void) {
//    vector<int> cards = { 1, 2 ,5 };
//    cout << solution(8, cards);
//}
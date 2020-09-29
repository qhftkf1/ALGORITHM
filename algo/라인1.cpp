//#include<bits/stdc++.h>
//
//using namespace std;
//map<int, int> ma;
//
//int solution(vector<vector<int>> boxes) {
//    int answer = 0;
//    int tot = 0;
//
//    for (vector<int> a : boxes) {
//        if (a[0] == a[1])
//            continue;
//        else {
//            for (int b : a) {
//                ma[b]++;
//                if (ma[b] == 2) {
//                    tot--;
//                    ma[b] = 0;
//                    continue;
//                }
//                tot++;  
//            }
//        }
//    }
//    answer = (tot / 2) + (tot % 2);
//    return answer;
//}
//
//int main(void) {
//    vector<vector<int>> boxes = { {1, 2}, {2, 1}, {3, 3}, {4, 5}, {5, 6}, {7, 8} };
//    cout << solution(boxes);
//}
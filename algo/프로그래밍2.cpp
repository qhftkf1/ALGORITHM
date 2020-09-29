//#include<bits/stdc++.h>
//
//using namespace std;
//
//vector<int> solution(int n) {
//    int target = (n * (n + 1) / 2);
//    vector<int> arr(target);
//   
//    int last_key = n;
//    int k = 0;
//    int num = 0;
//    int idx = 0;
//    int init = n;
//    int cnt = 0;
//
//    int t = n;
//    if (n > 1) {
//        while (num != target) {
//            int i = 0;
//            cnt++;
//            while (i < t && num != target) {
//                idx += k;
//                arr[idx] = ++num;
//                ++k; ++i;
//            }
//            t--;
//            k = 2 * cnt;i = 0;
//            while (i < t && num != target) {
//                arr[++idx] = ++num;
//                i++;
//            }
//            t--;
//            i = 0; last_key = init;
//            while (i < t && num != target) {
//                idx -= last_key;
//                arr[idx] = ++num;
//                --last_key; ++i;
//            }
//            t--;
//            --init;
//        }
//    }
//    else {
//        arr[0] = 1;
//    }
//   
//    return arr;
//}
//
//int main(void) {
//    vector<int> answer;
//    answer = solution(2);
//}
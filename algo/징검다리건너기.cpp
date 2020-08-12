//#include<bits/stdc++.h>
//
//using namespace std;
//
//int solution(vector<int> stones, int k) {
//    int ans = 2e9;
//    multiset<int> mlse;
//    int i;
//
//    for (i = 0; i < k - 1; i++)
//        mlse.insert(stones[i]);
//    for (; i < stones.size(); i++) {
//        mlse.insert(stones[i]);
//        ans = min(ans, *--mlse.end());
//        mlse.erase(mlse.find(stones[i - k + 1]));
//    }
//    return ans;
//}
//
//int main(void) {
//    vector<int> stones{ 2, 4, 5, 3, 2, 1, 4, 2, 5, 1 };
//    int k;
//    k = 3;
//    solution(stones, k);
//}

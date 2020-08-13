//#include<bits/stdc++.h>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<int> solution(vector<int> prices) {
//    vector<int> answer(prices.size());
//    vector<pair<int, int>> stack;
//    int temp;
//    for (int i = 0; i <= prices.size(); i++) {
//        int flag = 0, price;
//
//        if (i == prices.size()) {
//            flag = 1;
//            price = 0;
//        }
//        else
//            price = prices[i];
//        
//        while (stack.size() != 0 && stack.back().second > price)
//        {
//            answer[stack.back().first] = i - stack.back().first - flag;
//            stack.pop_back();
//        }
//        stack.push_back(make_pair(i, price));
//       
//    }
//    return answer;
//}
//
//int main(void) {
//    vector<int> prices{ 1, 2, 3, 2, 3 };
//    vector<int> ans;
//    ans = solution(prices);    
//}
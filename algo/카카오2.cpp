//#include<bits/stdc++.h>
//
//using namespace std;
//map<string, int> ma;
//vector<string> answer;
//int target;
//void dfs(string orders,int idx,  int cnt, string res) {
//    if (target == cnt) {
//        ma[res]++;
//        return;
//    }
//    for (int i = idx; i < orders.size(); i++) {
//        dfs(orders, i + 1, cnt + 1, res + orders[i]);
//    }
//}
//vector<string> solution(vector<string> orders, vector<int> course) {
//    vector<string> answer;
//    set<string> se;
//  
//    for (int i = 0; i < orders.size(); i++) {
//        for (int j = 0; j < course.size(); j++) {
//            target = course[j];
//            sort(orders[i].begin(), orders[i].end());
//            dfs(orders[i], 0, 0, "");
//        }
//    }
//   
//    for (int j = 0; j < course.size(); j++) {
//        int max = 0;
//        for (auto iter = ma.begin(); iter != ma.end(); iter++){
//            if (iter->first.size() == course[j]  && iter->second >= 2) {
//                if (max <= iter->second)
//                    max = iter->second;
//                    
//            }
//        }
//        for (auto iter = ma.begin(); iter != ma.end(); iter++) {
//            if (iter->first.size() == course[j] && iter->second == max) {
//                se.insert(iter->first);
//            }
//        }
//    }
//    for (string s : se) {
//        answer.push_back(s);
//    }
//    return answer;
//}
//
//int main(void) {
//    vector<string> orders = { "XYZ", "XWY", "WXA" };
//    vector<int> course = { 2,3,4 };
//    vector<string> answer;
//
//    answer = solution(orders, course);
//}
//#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <bits/stdc++.h>
//using namespace std;
//vector<int> ans;
//int n;
//int result = 100001;
//vector<int> answer;
//int is_promising(vector<int> gems_number) {
//    int max = -1;
//    int min = 100001;
//    for (int i : gems_number) {
//        if (i > max)
//            max = i;
//        else if (i < min)
//            min = i;
//    }
//    if (result < max - min)
//        return 0;
//    else
//        return 1;
//}
//void dfs(vector<vector<int>> gems,int idx, int count) {
//    int max, min;
//    max = -1;
//    min = 100001;
//    if (is_promising(answer)) {
//
//        if (count == n) {
//            for (int i : answer) {
//                cout << i << " ";
//                if (i > max)
//                    max = i;
//                if (i < min)
//                    min = i;
//            }
//            cout << "\n";
//            cout << min << max << endl;
//            if (result > max - min) {
//                result = max - min;
//                if (ans.size() != 0) {
//                    ans.pop_back();
//                    ans.pop_back();
//                }
//                ans.push_back(min);
//                ans.push_back(max);
//            }
//        }
//        else {
//            for (int i = 0; i < gems[idx].size(); i++) {
//                answer.push_back(gems[idx][i]);
//                dfs(gems, idx + 1, count + 1);
//                answer.pop_back();
//            }
//        }
//    }
//}
//vector<int> solution(vector<string> gems) {
//    
//    vector<string> gems_temp = gems;
//    vector<int> result(2);
//    set<string> se;
//    map<string, int> map;
//
//    for (string s : gems) {
//        se.insert(s);
//    }
//    // map이 왜 필요하지?
//    for (string s : se) {
//        cout << s << endl;
//    }
// 
//
//
//    return result;
//}
//
//
//
////int main(void) {
////    vector<string> gems{ "DIA", "RUBY", "RUBY", "DIA", "DIA", "EMERALD", "SAPPHIRE", "DIA" };
////    vector<int> answer = solution(gems);
////    for (int a : answer) {
////        cout << a << endl;
////    }
////}#include <string>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//#include <bits/stdc++.h>
//using namespace std;
//vector<int> ans;
//int n;
//int result = 100001;
//vector<int> answer;
//int is_promising(vector<int> gems_number) {
//    int max = -1;
//    int min = 100001;
//    for (int i : gems_number) {
//        if (i > max)
//            max = i;
//        else if (i < min)
//            min = i;
//    }
//    if (result < max - min)
//        return 0;
//    else
//        return 1;
//}
//void dfs(vector<vector<int>> gems,int idx, int count) {
//    int max, min;
//    max = -1;
//    min = 100001;
//    if (is_promising(answer)) {
//
//        if (count == n) {
//            for (int i : answer) {
//                cout << i << " ";
//                if (i > max)
//                    max = i;
//                if (i < min)
//                    min = i;
//            }
//            cout << "\n";
//            cout << min << max << endl;
//            if (result > max - min) {
//                result = max - min;
//                if (ans.size() != 0) {
//                    ans.pop_back();
//                    ans.pop_back();
//                }
//                ans.push_back(min);
//                ans.push_back(max);
//            }
//        }
//        else {
//            for (int i = 0; i < gems[idx].size(); i++) {
//                answer.push_back(gems[idx][i]);
//                dfs(gems, idx + 1, count + 1);
//                answer.pop_back();
//            }
//        }
//    }
//}
//vector<int> solution(vector<string> gems) {
//    
//    vector<string> gems_temp = gems;
//    vector<int> result(2);
//    set<string> se;
//    map<string, int> map;
//
//    for (string s : gems) {
//        se.insert(s);
//    }
//    // map이 왜 필요하지?
//    for (string s : se) {
//        cout << s << endl;
//    }
// 
//
//
//    return result;
//}
//
//
//
////int main(void) {
////    vector<string> gems{ "DIA", "RUBY", "RUBY", "DIA", "DIA", "EMERALD", "SAPPHIRE", "DIA" };
////    vector<int> answer = solution(gems);
////    for (int a : answer) {
////        cout << a << endl;
////    }
////}
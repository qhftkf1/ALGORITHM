//#include <string>
//#include <vector>
//#include <bits/stdc++.h>
//
//using namespace std;
//
//vector<string> temp;
//vector<vector<string>> double_temp;
//
//// string 비교 함수 
//int comp_id(string a, string b) {
//    int i;
//    i = 0;
//    if (a.size() != b.size())
//        return 0;
//    while (i < a.size()) {
//        if (a[i] != b[i] && b[i] != '*')
//            break;
//        i++;
//    }
//    if (i != a.size()) {
//        return 0;
//    }
//    return 1;
//}
//
//// 최종에 올려도 되는지 
//int is_valid(vector<string> tmp) {
//    int flag;
//    flag = 0;
//    for (int i = 0; i < double_temp.size(); i++) {
//        for (int j = 0; j < tmp.size(); j++) {
//            if (double_temp[i][j] != tmp[j]) {
//                flag = 1; break;
//            }
//        }
//        if (flag == 0)
//            return 0;
//        flag = 0;
//    }
//    return 1;
//}
//
////
//void dfs(vector<string> user_id, vector<string> banned_id, int check[8], int idx) {
//
//    vector<string> tmp;
//    if (idx == banned_id.size()) {
//        tmp = temp;
//        sort(tmp.begin(), tmp.end());
//        if (is_valid(tmp)) {
//            double_temp.push_back(tmp);
//        }
//    }
//    else {
//            for (int i = 0; i < user_id.size(); i++) {
//                if (comp_id(user_id[i], banned_id[idx]) && check[i] == 0) {
//                    check[i] = 1;
//                    temp.push_back(user_id[i]);
//                    dfs(user_id, banned_id, check, idx + 1);
//                    temp.pop_back();
//                    check[i] = 0;
//                }
//            }
//        }
// }
//
//int solution(vector<string> user_id, vector<string> banned_id){
//    int answer = 0;
//    int check[8] = { 0 };
//    dfs(user_id, banned_id, check, 0);
//    answer = double_temp.size();
//    return answer;
//}

//int main(void) {
//    vector<string> user_id{ "frodo", "fradi", "crodo", "abc123", "frodoc" };
//    vector<string> banned_id{ "*rodo", "*rodo", "******" };
//   
//    int result;
//    result = solution(user_id, banned_id);
//
//}



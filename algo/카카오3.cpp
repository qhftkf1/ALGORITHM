//#include<bits/stdc++.h>
//
//using namespace std;
//map<string, vector<int>> ma;
//int cnt;
//typedef struct p {
//    string inf = "";
//    int score;
//}p;
//
//int get_zeroIdx(p s) {
//    for (int i = 0; i < s.inf.size(); i++) {
//        if (s.inf[i] == '0')
//            return i;
//    }
//    return 4;
//}
//void check_dfs(p ty_p) {
//    
//    int idx = get_zeroIdx(ty_p);
//    if (idx == 4) {
//        for (int target : ma[ty_p.inf]) {
//            if (target >= ty_p.score)
//                cnt++;
//        }
//        return;
//    }
//    else if (idx == 0) {
//        for (int i = 0; i < 3; i++) {
//            ty_p.inf[idx] = '1' + i;
//            check_dfs(ty_p);
//        }
//    }
//    else {
//        for (int i = 0; i < 2; i++) {
//            ty_p.inf[idx] = '1' + i;
//            check_dfs(ty_p);
//        }
//    }
//}
//vector<int> solution(vector<string> info, vector<string> query) {
//    vector<int> answer;
//    vector<p> ap_p(info.size());
//    vector<p> q_p(query.size());
//
//    int k;
//
//    k = 0;
//
//    for (string s : info) {
//        string ss = "";
//        int l = 0;
//        for (char c : s) {
//            if (c == ' ') {
//                if (ss == "cpp") {
//                    ap_p[k].inf += '1'; 
//                }
//                else if (ss == "java") {
//                    ap_p[k].inf += '2'; 
//                }
//                else if (ss == "python") {
//                    ap_p[k].inf += '3'; 
//                }
//                else if (ss == "backend") {
//                    ap_p[k].inf += '1'; 
//                }
//                else if (ss == "frontend") {
//                    ap_p[k].inf += '2'; 
//                }
//                else if (ss == "junior") {
//                    ap_p[k].inf += '1'; 
//                }
//                else if (ss == "senior") {
//                    ap_p[k].inf += '2'; ;
//                }
//                else if (ss == "chicken") {
//                    ap_p[k].inf += '1';
//                }
//                else if (ss == "pizza") {
//                    ap_p[k].inf += '2'; 
//                }
//                ss = "";
//                l++;
//                continue;
//            }
//            ss += c;
//        }
//        ap_p[k].score = stoi(ss);
//        ma[ap_p[k].inf].push_back(ap_p[k].score);
//        k++;
//    }
//    k = 0;
//    for (string s : query) {
//        string ss = "";
//        int l = 0;
//        for (char c : s) {
//            if (c == ' ') {
//                if (ss == "-")
//                    q_p[k].inf += '0';
//                else if (ss == "cpp") {
//                    q_p[k].inf += '1';
//                }
//                else if (ss == "java") {
//                    q_p[k].inf += '2';
//                }
//                else if (ss == "python") {
//                    q_p[k].inf += '3';
//                }
//                else if (ss == "backend") {
//                    q_p[k].inf += '1';
//                }
//                else if (ss == "frontend") {
//                    q_p[k].inf += '2';
//                }
//                else if (ss == "junior") {
//                    q_p[k].inf += '1';
//                }
//                else if (ss == "senior") {
//                    q_p[k].inf += '2'; ;
//                }
//                else if (ss == "chicken") {
//                    q_p[k].inf += '1';
//                }
//                else if (ss == "pizza") {
//                    q_p[k].inf += '2';
//                }
//                ss = "";
//                l++;
//                continue;
//            }
//            ss += c;
//        }
//        q_p[k].score = stoi(ss);
//        k++;
//    }
//
//    for (int i = 0; i < q_p.size(); i++) {
//        cnt = 0;
//        check_dfs(q_p[i]);
//        answer.push_back(cnt);
//    }
//    return answer;
//}
//
//int main(void) {
//    vector<string> info = { "java backend junior pizza 150","python frontend senior chicken 210","python frontend senior chicken 150","cpp backend senior pizza 260","java backend junior chicken 80","python backend senior chicken 50" };
//    vector<string> query = { "- and - and - and - 100","python and frontend and senior and chicken 200","cpp and - and senior and pizza 250","- and backend and senior and - 150","- and - and - and chicken 100","- and - and - and - 150" };
//    vector<int> ans;
//    ans = solution(info, query);
//    for (int i : ans)
//        cout << i << " ";
//    
//}
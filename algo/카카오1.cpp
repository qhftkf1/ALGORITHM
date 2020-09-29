//#include<bits/stdc++.h>
//
//using namespace std;
//
//string solution(string new_id) {
//    string ans = "";
//    int flag = 0;
//   
//    for (int i = 0; i < new_id.size(); i++) {
//        if (new_id[i] >= 'A' && new_id[i] <= 'Z')
//            new_id[i] += 32;
//        else if (new_id[i] >= 'a' && new_id[i] <= 'z')
//            continue;
//        else if (!((new_id[i] >= '0' && new_id[i] <= '9') || new_id[i] == '-' || new_id[i] == '_' || new_id[i] == '.')) {
//            new_id.erase(i, 1);
//            i -= 1;
//        }
//    }   
//    for (int i = 0; i < new_id.size(); i++) {
//        if (new_id[i] == '.') {
//            if (flag == 1) {
//                new_id.erase(i, 1);
//                i -= 1;
//            }
//            else
//                flag = 1;
//        }else
//            flag = 0;
//    }
//    if (new_id[0] == '.')
//        new_id.erase(0, 1);
//    if (new_id.size() != 0 && new_id[new_id.size() - 1] == '.')
//        new_id.erase(new_id.size() - 1, 1);
//    if (new_id == "")
//        new_id += 'a';
//    if (new_id.size() >= 16) {
//        new_id.erase(15, new_id.size() - 15);
//    }
//    if (new_id.size() != 0 && new_id[new_id.size() - 1] == '.')
//        new_id.erase(new_id.size() - 1, 1);
//    while (new_id.size() < 3) {
//        new_id += new_id[new_id.size() - 1];
//    }
//    return new_id;
//}
//
//int main(void) {
//    cout << solution("=.=");
//}
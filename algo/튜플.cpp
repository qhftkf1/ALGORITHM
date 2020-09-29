//#include <string>
//#include <vector>
//#include <bits/stdc++.h>
//
//using namespace std;
//
//vector<int> solution(string s) {
//    vector<int> answer;
//    vector<string> tuple_s;
//    set<int> c_n;
//    map<int, int> ma;
//    string test;
//    istringstream ss(s.substr(1, s.size() - 2));
//
//    while (getline(ss, test, '{')) {
//        getline(ss, test, '}');
//        tuple_s.push_back(test);
//    }
//    for (int i = 0; i < tuple_s.size(); i++) {
//        istringstream ss(tuple_s[i]);
//        while (getline(ss, test, ',')) {
//            ma[stoi(test)]++;
//            c_n.insert(stoi(test));
//        }
//    }
//    for (int i = 0; i < ma.size(); i++) {
//        answer.push_back(0);
//    }
//    while (!(c_n.empty())) {
//        answer[ma.size() - ma[*c_n.begin()]] = *c_n.begin();
//        c_n.erase(c_n.begin());
//    }
//    return answer;
//}
//
//int main(void) {
//    string s = "{ {2}, { 2,123 }, { 2,123,3 }, { 2,123,3,4 }}";
//    solution(s);
//}
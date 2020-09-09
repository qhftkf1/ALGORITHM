#include<bits/stdc++.h>

using namespace std;
int val = 27;
int res;
map<string, int> ma;
vector<int> answer;
int fn_compress(string msg, string lang, int idx) {
  
    if (ma[lang] == 0) {
        ma[lang] = val++;
        answer.push_back(res);
        return idx;
    }
    res = ma[lang];
    return fn_compress(msg, lang + msg[idx + 1], idx + 1);
}

vector<int> solution(string msg) {
    int idx;
    for (int i = 1; i <= 26; i++) {
        string tmp = "";
        tmp = 'A' + i - 1;
        ma[tmp] = i;
    }
    idx = 0;
    while (idx != msg.length()) {
        string tmp = "";
        tmp += msg[idx];
        idx = fn_compress(msg, tmp, idx);
    }
    return answer;
}

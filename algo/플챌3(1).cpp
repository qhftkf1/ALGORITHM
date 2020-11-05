#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> binNum;
    string ss;
    int i;
    int num, cnt, rot;
   
    
    cnt = 0; rot = 0;
    while (s != "1") {
        i = 0;
        while (i != s.size()) {
            if (s[i] == '1')
                ss += s[i];
            else
                cnt++;
            i++;
        }
        num = ss.length();
        ss.clear();
        while(num != 0){
            binNum.push_back(num % 2);
            num /= 2;
        }
        reverse(binNum.begin(), binNum.end());
        s.clear();
        for (int i = 0; i < binNum.size(); i++) {
            s += binNum[i] + '0';
        }
        binNum.clear();
        rot++;
    }
    answer.push_back(rot); answer.push_back(cnt);
    return answer;
}

int main(void) {
    string s;
    vector<int> ans;
    ans = solution("01110");
}
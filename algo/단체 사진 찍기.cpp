//#include <bits/stdc++.h>
//
//using namespace std;
//
//// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
//int solution(int n, vector<string> data) {
//    int answer = 0;
//    vector<char> kakao{ 'A', 'C', 'F', 'J', 'M', 'N', 'R', 'T' };
//    do {
//        map<char, int> member;
//        int i;
//        for (i = 0; i < kakao.size(); i++) {
//            member[kakao[i]] = i;
//        }
//        for (i = 0; i < n; i++) {
//            char one = data[i][0];char another = data[i][2];char op = data[i][3];
//            int comp = data[i][4] - '0';
//            int val = abs(member[one] - member[another]) - 1;
//            if (val > comp){
//                if (op != '>') 
//                    break;
//            }
//            else if (val < comp) {
//                if (op != '<')
//                    break;
//            }
//            else {
//                if (op != '=')
//                    break;
//            }
//        }
//        if (i == n)answer++;
//    } while (next_permutation(kakao.begin(), kakao.end()));
//    return answer;
//}
//
//int main(void) {
//    vector<string> data = { "N~F=0", "R~T>2" };
//    cout << solution(2, data);
//}
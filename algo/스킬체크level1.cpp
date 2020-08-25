//#include <string>
//#include <vector>
//
//using namespace std;
//
//void fn_swap(string* str1, string* str2) {
//    string *temp = str1;
//    str2 = str1;
//    str1 = temp;
//}
//vector<string> solution(vector<string> strings, int n) {
//    vector<string> answer;
//    for (int i = 0; i < strings.size(); i++) {
//        for (int j = i + 1; j < strings.size(); j++) {
//            if (strings[i][n] > strings[j][n]) {
//                string temp = strings[j];
//                strings[j] = strings[i];
//                strings[i] = temp;
//            }
//            else if (strings[i][n] == strings[j][n]) {
//                if (strings[i].compare(strings[j]) > 0) {
//                    string temp = strings[j];
//                    strings[j] = strings[i];
//                    strings[i] = temp;
//                }
//            }
//        }
//    }
//    answer = strings;
//    return answer;
//}
//int main(void) {
//    vector<string> ss = { "abce", "abcd", "cdx" };
//    int n = 1;
//    solution(ss, n);
//}
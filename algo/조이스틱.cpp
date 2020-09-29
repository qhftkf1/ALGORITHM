//#include <string>
//#include <vector>
//#include <bits/stdc++.h>
//
//using namespace std;
//
//// 조이스티 아래/위 로 움직이는 것의 최솟값
////int fn_count_alp(char c) {
////    int count;
////    char a = 'A';
////    char b = 'Z';
////    count = 0;
////    while (a <= 'Z' && b >= 'A') {
////        if (c == a)
////            break;
////        a++;
////        count++;
////        if (c == b)
////            break;
////        b--;
////    }
////    return count;
////}
//int solution(string name) {
//    int answer = 0;
//    int flag = -1;
//    int min_value = name.size() - 1;
//    int temp = 10000;
// 
//    for (char c : name)
//        answer += min(c - 'A', 'Z' - c + 1);
//    for (int i = 1; i < name.size(); i++) {
//        if (name[i] == 'A') {
//            if (flag == -1) flag = i - 1;
//        }
//        else if (flag != -1) {
//            temp = 2 * flag + name.size() - i;
//
//            if (temp < min_value)
//                min_value = temp;
//            flag = -1;
//        }
//        // BAABAAAABB
//    }
//    answer += min_value;
//    return answer;
//}
//
//int main(void) {
//    cout << solution("BAAABA");
//}
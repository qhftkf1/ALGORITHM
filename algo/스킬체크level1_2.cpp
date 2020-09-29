//#include<bits/stdc++.h>
//
//using namespace std;
//
//string solution(int a, int b) {
//    string answer = "";
//    int t_day = 1;
//    
//    t_day = t_day + (a / 2) * 31;
//    t_day = t_day + ((a - 1) / 2) * 30;
//    if (a > 2)
//        t_day -= 1;
//    if (a > 8)
//        if (a % 2 == 1)
//            t_day += 1;
//    t_day += b;
//    t_day %= 7;
//    if (t_day == 1)
//        answer = "FRI";
//    else if (t_day == 2)
//        answer = "SAT";
//    else if (t_day == 3)
//        answer = "SUN";
//    else if (t_day == 4)
//        answer = "MON";
//    else if (t_day == 5)
//        answer = "TUE";
//    else if (t_day == 6)
//        answer = "WEN";
//    else if (t_day == 0)
//        answer = "THU";
//    return answer;
//}
//
//int main(void) {
//    cout << solution(1, 6);
//}
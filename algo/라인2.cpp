//#include<bits/stdc++.h>
//
//using namespace std;
//
//vector<int> solution(vector<int> ball, vector<int> order) {
//    vector<int> answer;
//    map<int, int> que;
//    int i = 0, j = ball.size() - 1;
//    int k = 0;
//  
//    while (i <= j) {
//        if (order[k] == ball[i]) {
//            answer.push_back(order[k]);
//            i++;
//            while (que[ball[i]]) {
//                answer.push_back(ball[i]);
//                que[ball[i]] = 0;
//                i++;
//            }
//
//        }
//        else if (order[k] == ball[j]) {
//            answer.push_back(order[k]);
//            j--;
//            while (que[ball[j]]) {
//                answer.push_back(ball[j]);
//                que[ball[j]] = 0;
//                j--;
//            }
//        }
//        else {
//            que[order[k]] = 1;
//        }
//        k++;
//    }
//    return answer;
//}
//
//int main(void) {
//    vector<int> ball = { 11, 2, 9, 13, 24};
//    vector<int> order = { 9, 2, 13, 24, 11};
//
//    vector<int> answer = solution(ball, order);
//}
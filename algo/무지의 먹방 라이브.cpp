//#include<bits/stdc++.h>
//
//using namespace std;
//pair<int, int> getMin(vector<int> arr) {
//    int flag = 0;
//    int min = 200001;
//    for (int i = 0; i < arr.size(); i++){
//        if (min > arr[i] && arr[i] != 0){
//            min = arr[i];
//            flag = i;
//        }
//    }
//    return make_pair(min, flag);
//}
//
//int solution(vector<int> food_times, long long k) {
//    int answer = 0;
//    long long cnt = food_times.size();
//    long long sum = 0;
//    long long idx = 0;
//    while (sum + (getMin(food_times).first * cnt) < k) {
//        sum += getMin(food_times).first * cnt;
//        for (int i = 0; i < food_times.size(); i++) {
//            food_times[i] -= getMin(food_times).first;
//        }
//        cnt--;
//    }
//    idx = (k - sum) % cnt;
//    int i = 0;
//    while(1) {
//        if (i >= food_times.size())
//            i = 0;
//        if (food_times[i] == 0) {
//            i++;
//            continue;
//        }
//        if (!idx) {
//            answer = i + 1;
//            break;
//        }
//        idx--;
//        i++;
//    }
//    return answer;
//}
//
//int main(void) {
//    vector<int> food = { 3, 1, 2 };
//    long long k = 6;
//    cout << solution(food, k);
//}
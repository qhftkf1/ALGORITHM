//#include <string>
//#include <vector>
//#include <bits/stdc++.h>
//
//using namespace std;
//map<long long, long long> ma;
//
//long long find(long long idx) {
//	if (ma[idx] == 0) return ma[idx] = idx;
//	return ma[idx] = find(ma[idx] + 1);
//}
//vector<long long> solution(long long k, vector<long long> room_number) {
//    vector<long long> answer(room_number.size());
//
//	for (int i = 0; i < room_number.size(); i++)
//	{
//		long long idx = room_number[i];
//		if (ma[room_number[i]]== 0)
//			ma[room_number[i]] = room_number[i];
//		else {
//			ma[room_number[i]] = find(room_number[i] + 1);
//		}
//		answer[i] = ma[room_number[i]];
//		
//	}
//    return answer;
//}
//
//int main(void) {
//    vector<long long> room_number{ 1, 1, 1, 1, 1, 1, 2 };
//    long long k;
//    k = 7;
//    solution(k, room_number);
//}
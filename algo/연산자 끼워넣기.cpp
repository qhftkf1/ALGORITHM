//#include <bits/stdc++.h>
//
//using namespace std;
//
//int n;
//long max_value;
//long min_value; 
//int cal[4] = { 0 };
//
//void dfs(long num[], int idx, long sum) {
//	if (idx == n) {
//		if (max_value < sum)
//			max_value = sum;
//		if (min_value > sum)
//			min_value = sum;
//		return;
//	}
//	for (int i = 0; i < 4; i++) {
//		if (cal[i] != 0) {
//			cal[i]--;
//			if (i == 0)
//				dfs(num,idx + 1, sum + num[idx]);
//			else if (i == 1)
//				dfs(num,idx + 1, sum - num[idx]);
//			else if (i == 2)
//				dfs(num, idx + 1, sum * num[idx]);
//			else if (i == 3) {
//				dfs(num, idx + 1, sum / num[idx]);
//			}
//			cal[i]++;
//		}
//	}
//}
//
//int main(void) {
//	long num[11];
//	max_value = -1000000001;
//	min_value = 1000000001;
//	cin >> n;
//	for (int i = 0; i < n; i++){
//		cin >> num[i];
//	}
//	cin >> cal[0] >> cal[1] >> cal[2] >> cal[3];
//	dfs(num, 1, num[0]);
//	cout << max_value << "\n" << min_value;
//}
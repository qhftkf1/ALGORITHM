//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(void) {
//	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
//	int N, M, input, total;
//	cin >> N >> M;
//	vector<int> arr;
//	vector<int> sum;
//	total = 0;
//	for (int i = 0; i < N; i++) {
//		cin >> input;
//		total += input;
//		arr.push_back(input);
//		sum.push_back(total);
//	}
//
//	for (int i = 0; i < M; i++) {
//		int a, b;
//		cin >> a >> b;
//		cout << sum[b - 1] - sum[a - 1] + arr[a - 1] << "\n";
//	}
//}
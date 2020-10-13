//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main(void) {
//	int n;
//	int t[16]; // day
//	int p[16]; // cost
//	vector<int> d(16); //dp
//	int max_value;
//	int res;
//
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//		cin >> t[i] >> p[i];
//	for (int i = 1; i <= n; i++) {
//		max_value = 0;
//		for (int j = 1; j <= i - 1; j++) {
//			if (i - t[j] >= j) {
//				max_value = max(d[j], max_value);
//			}
//		}
//		if (i + (t[i] - 1) <= n)
//			d[i] = max_value + p[i];
//		else
//			d[i] = 0;
//	}
//	res = *max_element(d.begin() + 1, d.begin() + n + 1);
//	cout << res << "\n";
//}
//#include <bits/stdc++.h>
//
//using namespace std;
//
//int main(void) {
//	int n;
//	int main, sub;
//	long cnt;
//	int* ptr;
//
//	cnt = 0;
//	cin >> n;
//	ptr = (int*)malloc(sizeof(int) * n);
//	for (int i = 0; i < n; i++) {
//		cin >> ptr[i];
//	}
//	cin >> main >> sub;
//	for (int i = 0; i < n; i++) {
//		ptr[i] -= main;
//		cnt++;
//	}
//	for (int i = 0; i < n; i++) {
//		if (ptr[i] > 0) {
//			if (ptr[i] % sub == 0)
//				cnt += ptr[i] / sub;
//			else
//				cnt += ptr[i] / sub + 1;
//		}
//	}
//	cout << cnt << "\n";
//}
//#include<stdio.h>
//
//int main() {
//	int t, k;
//	int testCase;
//	scanf_s("%d", &testCase);
//	for (t = 0; t < testCase; t++) {
//		long long n, m;
//		int cnt;
//		cnt = 0;
//		scanf_s("%u", &n);
//		scanf_s("%u", &m);
//		printf("%u\n", n - 12);
//		printf("%u\n", m);
//		while (n >= 5) {
//			n = n - 5;
//
//			if (m >= 7) {
//				m -= 7;
//			}
//			else if (m < 7) {
//				n = n - 7 + m;
//				m = 0;
//				if (n < 0)
//					break;
//			}
//			cnt++;
//		}
//		printf("%d\n", cnt);
//	}
//
//	return 0;
//}

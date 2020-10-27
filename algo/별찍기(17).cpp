//#include<bits/stdc++.h>
//
//using namespace std;
//
//int main(void) {
//	int n, t, j, k;
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (j = 1; j < n - i; j++)printf(" "); 
//		if (i == n - 1) {
//			for(k = 0; k < (i + 1) * 2 - 1;k++)printf("*");
//		}
//		else {
//			for (k = 0; k < (i + 1) * 2 - 1; k++) {
//				if (k == 0 || k == (i + 1) * 2 - 2)
//					printf("*");
//				else printf(" ");
//			}
//		}
//		printf("\n");
//	}
//}
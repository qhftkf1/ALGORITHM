#include<bits/stdc++.h>

using namespace std;
// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
int cnt;
void test_dfs(int n, int add) {
	if (pow(3, add / 2) > n)
		return;
	if (n == 3 && add == 2)
		cnt++;
	else if(n > 3){
		if (n % 3 == 0 && add >= 2)
			test_dfs(n / 3, add - 2);
		test_dfs(n - 1, add + 1);
	}
}
int solution(int n) {
	cnt = 0;
	test_dfs(n, 0);
	return cnt;
}

int main(void) {
	cout << solution(41);
}
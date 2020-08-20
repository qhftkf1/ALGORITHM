#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

string base = "0123456789ABCDEF";

string fn_base_to_string(int n, int num) {
	string s = "";
	while (num != 0) {
		s += base[num % n];
		num /= n;
	}
	reverse(s.begin(), s.end());
	return s;
}

string solution(int n, int t, int m, int p) {
    string answer = "0";
	string ans = "";
	for (int i = 1;; i++) {
		if (i == 1e5) break;
		answer += fn_base_to_string(n, i);
	}
	p--;
	for (int i = 0;i < t; i++) {
		if (i % m == p) ans += answer[i];
	}
	
    return ans;
}

int main(void) {
    cout << solution(16, 16, 2, 1);
}
//#include<bits/stdc++.h>
//
//using namespace std;
//
//string solution(string m, string k) {
//	string answer = "";
//	string::iterator it;
//	it = find(m.begin(), m.end(), k[0]);
//	m.erase(it);
//	for (int i = 1; i < k.size(); i++) {
//		it = find(it, m.end(), k[i]);
//		m.erase(it);
//	}
//	answer = m;
//	return answer;
//}
//int main(void) {
//	cout << solution("aabcb", "ab");
//}

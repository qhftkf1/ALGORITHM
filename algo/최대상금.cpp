#include<bits/stdc++.h>

using namespace std;
vector<int> arr;
int rcnt;
int MAX;
void fn_swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}
void is_valid() {
	int n = 0;
	for (int a : arr) {
		n = n * 10 + a;
	}
	if (MAX < n)
		MAX = n;
}
int fn_array_to_int() {
	int n = 0;
	for (int a : arr) {
		n = n * 10 + a;
	}
	return n;
}
void fn_int_to_array(int num) {
	if (num / 10 == 0) {
		arr.push_back(num % 10);
		return;
	}
	fn_int_to_array(num / 10);
	arr.push_back(num % 10);
}
void dfs_bfs(int cnt, int pos) {
	if (rcnt == cnt){
		is_valid();
		return;
	}
	int max = *max_element(arr.begin() + pos, arr.end());
	queue<int> q;
	
	for (int i = pos; i < arr.size(); i++) {
		if (max == arr[i])
			q.push(i);
	}
	while (q.size()) {
		int idx = q.front();
		int flag = 0;
		for (int i = 0 ; i <= idx; i++) {
			if (arr[i] < arr[idx]) {
				fn_swap(arr[i], arr[idx]);
				dfs_bfs(cnt + 1, i + 1);
				fn_swap(arr[i], arr[idx]);
				flag = 1;
				break;
			}
		}
		if (flag == 0) {
			for (int i = 0; i < arr.size(); i++) {
				if (i != idx && arr[i] == arr[idx]) {
					dfs_bfs(cnt + 1, pos);
					flag = 1;
					break;
				}	
			}
			if (flag == 0) {
				fn_swap(arr[arr.size() - 2], arr[arr.size() - 1]);
				MAX = fn_array_to_int();
				dfs_bfs(cnt + 1, pos);
			}
		}
		q.pop();
	}
}

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;

	for (test_case = 1; test_case <= T; ++test_case)
	{
		int num;
		vector<int> tmp;
		arr = tmp;
		cin >> num >> rcnt;
		if (num >= 0 && num <= 9)
			MAX = num;
		else {
			fn_int_to_array(num);
			MAX = num;
			dfs_bfs(0, 0);
		}
		cout << "#" << test_case << " " << MAX << "\n";
		
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

int main(void) {
	int n, num, target;
	vector<int> lower;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		if (i == 0) {
			lower.push_back(num);
			target = num;
		}
		else {
			if (target >= num) {
				auto it = lower_bound(lower.begin(), lower.end(), num);
				*it = num;
			}
			else
				lower.push_back(num);
			target = lower[lower.size() - 1];
		}
	}
	cout << lower.size() << '\n';
}
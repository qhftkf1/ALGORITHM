#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(void) {
	int n, x, y;
	vector<pair<int, int>> p;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		p.push_back({ x, y });
	}
	sort(p.begin(), p.end());
	for (int i = 0; i < n; i++)
		cout << p[i].first << " " << p[i].second << "\n";
		
}
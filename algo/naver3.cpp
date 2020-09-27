#include<bits/stdc++.h>

using namespace std;

void dfs_bfs(vector<vector<int>>& computer, queue<int> q) {

	while (q.size()) {
		int t = q.size();
		int pos = q.front;
		while (computer[pos].size()) {

		}
	}

}
int solution(int n, vector<vector<int>> edges) {
	int answer = 0;
	queue<int> q;
	vector<vector<int>> computer(50);
	for (int i = 0; i < edges.size(); i++)
		computer[edges[i][0]].push_back(edges[i][1]);
	q.push(0);
	dfs_bfs(computer, q);
	return answer;
}

int main(void) {
	vector<vector<int>> edges = { {0, 1}, {0, 2}, {0, 3}, {1, 4}, {1, 5}, {2, 6}, {3, 7}, {3, 8}, {3, 9}, {4, 10}, {4, 11}, {5, 12}, {5, 13}, {6, 14}, {6, 15}, {6, 16},{8, 17 }, {8, 18} };
	solution(19, edges);
}
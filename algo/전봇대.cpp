#include<bits/stdc++.h>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;

	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int N, cnt;
		vector<pair<int, int>> line;

		cin >> N;
		cnt = 0;
		for (int i = 0; i < N; i++) {
			int n, m;
			cin >> n >> m;
			line.push_back({ n, m });
		}
		sort(line.begin(), line.end());
		for (int i = 0; i < line.size(); i++) {
			for (int j = i + 1; j < line.size(); j++) {
				if (line[i].first < line[j].first && line[i].second > line[j].second)
					cnt++;
			}
		}
		cout << "#" << test_case << " " << cnt << endl;
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}
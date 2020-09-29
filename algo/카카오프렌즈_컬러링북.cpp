#include <vector>
#include <bits/stdc++.h>

using namespace std;

// 전역 변수를 정의할 경우 함수 내에 초기화 코드를 꼭 작성해주세요.
vector<int> solution(int m, int n, vector<vector<int>> picture) {
    int number_of_area = 0;
    int max_size_of_one_area = 0;
	int x_pos;
	int y_pos;
	int count_max;
	int count_total;

    vector<int> answer(2);
	int check[101][101] = { 0 };
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
	queue<pair<int, int>> q;
	count_max = 0;
	count_total = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (!(check[i][j]) && picture[i][j] != 0)
			{
				int count = 0;
				q.push(pair<int, int>(i, j));
				check[i][j] = 1;
				count_total++;
				while (!(q.empty()))
				{
					y_pos = q.front().first;
					x_pos = q.front().second;
				
					if (y_pos > 0 && picture[y_pos - 1][x_pos] == picture[i][j] && check[y_pos - 1][x_pos] == 0)
					{
						q.push(pair<int, int>(y_pos - 1, x_pos));
						check[y_pos - 1][x_pos] = 1;
					}
					if (y_pos < m - 1  && picture[y_pos + 1][x_pos] == picture[i][j] && check[y_pos + 1][x_pos] == 0)
					{
						q.push(pair<int, int>(y_pos + 1, x_pos));
						check[y_pos + 1][x_pos] = 1;
					}
					if (x_pos > 0 && picture[y_pos][x_pos - 1] == picture[i][j] && check[y_pos][x_pos - 1] == 0)
					{
						q.push(pair<int, int>(y_pos, x_pos - 1));
						check[y_pos][x_pos - 1] = 1;
					}
					if (x_pos < n - 1 && picture[y_pos][x_pos + 1] == picture[i][j] && check[y_pos][x_pos + 1] == 0)
					{
						q.push(pair<int, int>(y_pos, x_pos + 1));
						check[y_pos][x_pos + 1] = 1;
					}	
					count++;
					q.pop();
				}
				if (count_max < count)
					count_max = count;
			}
		}
	}
	answer[0] = count_total;
	answer[1] = count_max;
    return answer;
}

//int main(void) {
//    int m;
//    int n;
//    vector<int> result(2);
//    vector<vector<int>> book{ {1, 1, 1, 0},
//							{ 1, 1, 1, 0},
//                            { 0, 0, 0, 1 },
//                            { 0, 0, 0, 1 },
//                            { 0, 0, 0, 1 },
//                            { 0, 0, 0, 1 }};
//
//    result = solution(6, 4, book);
//}
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

typedef  pair<int, int> pos;

int fn_bfs(int start, int target) {
    int count;
    queue<pos> q;
    vector<int> base_x = { 1, -1, 0, 0 };
    vector<int> base_y = { 0, 0, 1, -1 };
    vector<vector<int>> keypad = { {1, 2, 3},
                                   {4, 5, 6},
                                   {7, 8, 9},
                                   {-1, 0, -2} };
    int check[4][3] = { 0 };
    int x_pos;
    int y_pos;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            if (keypad[i][j] == start) {
                x_pos = j;
                y_pos = i;
            }
        }
    }
    q.push({ x_pos, y_pos });
    check[y_pos][x_pos] = 1;
    count = 0;
    while (q.size()) {
        int n = q.size();
        while (n--) {
            int x, y;
            tie(x, y) = q.front();
            if (keypad[y][x] == target)
                return count;
            q.pop();
            for (int i = 0; i < 4; i++) {
                int nx, ny;
                nx = x + base_x[i];
                ny = y + base_y[i];
                if ((nx >= 0 && nx < 3) && (ny >= 0 && ny < 4) && check[ny][nx] == 0) {
                    q.push({ nx, ny });
                    check[ny][nx] = 1;
                }
            }
        }
        count++;
    }
    return count;
}
string solution(vector<int> numbers, string hand) {
    string answer = "";
    int left = -1;
    int right = -2;

    for (int a : numbers) {
        if (a == 1 || a == 4 || a == 7) {
            left = a; answer += 'L';
        }
        else if (a == 3 || a == 6 || a == 9) {
            right = a; answer += 'R';
        }
        else {
            int left_flag = fn_bfs(left, a);
            int right_flag = fn_bfs(right, a);

            if (left_flag == right_flag) {
                if (hand == "right") {
                    answer += 'R'; right = a;
                }
                else {
                    answer += 'L'; left = a;
                }
            }
            else if (left_flag < right_flag){
                answer += 'L'; left = a;
            }
            else {
                answer += 'R'; right = a;
            }
        }
    }
    return answer;
}

int main(void) {
    vector<int> numbers = {1, 3, 4, 5, 8, 2, 1, 4, 5, 9, 5};
    string hand = "right";

    cout << solution(numbers, hand);
}
#include <string>
#include <vector>

using namespace std;
int arr[101][101];
int dx[4] = {1,0, -1, 1};
int dy[4] = { 0,1, 1, -1 };
int val[4] = { 1, 1, 2, 2 };

vector<vector<int>> solution(int n, bool horizontal) {
    vector<vector<int>> answer;
    int x, y, flag, d;

    d = 2;
    flag = 0;
    x = 0, y = 0;
    arr[y][x] = 0;
    x += 1;
    y += 0;
    arr[y][x] = 1;
    for (int i = 1; i < n - 1; i++) {
        int nx = x; int ny = y;
        for (int j = 0; j < i;j++) {
            nx += dx[d];
            ny += dy[d];
            arr[ny][nx] = arr[y][x] + val[d];
        }
        if (flag == 0) {
            nx += dx[1];
            ny += dy[1];
            arr[ny][nx] = arr[y][x] + val[1];
        }
        else if (flag == 1) {
            nx += dx[0];
            ny += dy[0];
            arr[ny][nx] = arr[y][x] + val[0];
        }
        x = nx; y = ny;
        if (d == 2)
            d = 3;
        else d = 2;
        if (flag == 0)
            flag = 1;
        else flag = 0;
    }
    if (n % 2 == 0)
        d = 2;
    else
        d = 3;
    int nx = x;
    int ny = y;
    for (int i = 0; i < n; i++) {
        nx += dx[d];
        ny += dx[d];
        arr[ny][nx] = arr[y][x] + val[d];
    }
    for (int i = n - 2; i == 0; i--) {
        int nx = x; int ny = y;
        if (d == 2)
            flag = 0;
        else flag = 1;
        if (flag == 0) {
            nx = x + dx[0]; ny = y + dy[0];
            arr[ny][nx] = arr[y][x] + val[0];
        }
        else if (flag == 1) {
             nx = x + dx[1];  ny = y + dy[1];
            arr[ny][nx] = arr[y][x] + val[1];
        }
        if (flag == 0) d = 3;
        else d = 2;
        for (int j = 0; j < i; j++) {
            nx += dx[d];
            ny += dy[d];
            arr[ny][nx] = arr[y][x] + val[d];
        }
        

    }
    return answer;
}

int main(void) {
    int n;
    
    solution(n, "true");
}
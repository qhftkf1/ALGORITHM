/////////////////////////////////////////////////////////////////////////////////////////////
// �⺻ �����ڵ�� ���� �����ص� ���� �����ϴ�. ��, ����� ���� ����
// �Ʒ� ǥ�� ����� ���� �ʿ�� �����ϼ���.
// ǥ�� �Է� ����
// int a;
// float b, c;
// double d, e, f;
// char g;
// char var[256];
// long long AB;
// cin >> a;                            // int ���� 1�� �Է¹޴� ����
// cin >> b >> c;                       // float ���� 2�� �Է¹޴� ���� 
// cin >> d >> e >> f;                  // double ���� 3�� �Է¹޴� ����
// cin >> g;                            // char ���� 1�� �Է¹޴� ����
// cin >> var;                          // ���ڿ� 1�� �Է¹޴� ����
// cin >> AB;                           // long long ���� 1�� �Է¹޴� ����
/////////////////////////////////////////////////////////////////////////////////////////////
// ǥ�� ��� ����
// int a = 0;                            
// float b = 1.0, c = 2.0;               
// double d = 3.0, e = 0.0; f = 1.0;
// char g = 'b';
// char var[256] = "ABCDEFG";
// long long AB = 12345678901234567L;
// cout << a;                           // int ���� 1�� ����ϴ� ����
// cout << b << " " << c;               // float ���� 2�� ����ϴ� ����
// cout << d << " " << e << " " << f;   // double ���� 3�� ����ϴ� ����
// cout << g;                           // char ���� 1�� ����ϴ� ����
// cout << var;                         // ���ڿ� 1�� ����ϴ� ����
// cout << AB;                          // long long ���� 1�� ����ϴ� ����
/////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>
#include<vector>

vector<vector<int>> students;
int dx[4] = { 0, 0, 1, -1 };
int dy[4] = { 1, -1, 0, 0 };
using namespace std;
int n;
bool possible(int nx, int ny) {
	if (nx < 0 || nx >= n || ny < 0 || ny >= n) return false;
	else return true;
}

void takeAseat(int idx, vector<vector<int>> map, int n) {
	int friendCnt, zeroCnt;
	pair<int, int> pii;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!map[i][j]) {
				for (int d = 0; d < 4; d++) {
					friendCnt = 0; zeroCnt = 0;
					if (possible(i + dx[d], j + dy[d])){
						for (int l = 1; l < 5; l++) {
							if (map[i + dx[d]][j + dy[d]] == map[idx][l]) friendCnt++;
							else if (map[i + dx[d]][j + dy[d]] == 0) zeroCnt++;
						}
					}
				}
				// ��ĭ�� ģ�� ���� ���� �� ���� �ʿ�
				tmp[i][j] 
			}
		}
	}
}
int main(int argc, char** argv)
{
	int test_case;
	int T;
	/*
	   �Ʒ��� freopen �Լ��� input.txt �� read only �������� �� ��,
	   ������ ǥ�� �Է�(Ű����) ��� input.txt ���Ϸκ��� �о���ڴٴ� �ǹ��� �ڵ��Դϴ�.
	   //�������� �ۼ��� �ڵ带 �׽�Ʈ �� ��, ���Ǹ� ���ؼ� input.txt�� �Է��� ������ ��,
	   freopen �Լ��� �̿��ϸ� ���� cin �� ������ �� ǥ�� �Է� ��� ���Ϸκ��� �Է��� �޾ƿ� �� �ֽ��ϴ�.
	   ���� �׽�Ʈ�� ������ ������ �Ʒ� �ּ��� ����� �� �Լ��� ����ϼŵ� �����ϴ�.
	   freopen �Լ��� ����ϱ� ���ؼ��� #include <cstdio>, Ȥ�� #include <stdio.h> �� �ʿ��մϴ�.
	   ��, ä���� ���� �ڵ带 �����Ͻ� ������ �ݵ�� freopen �Լ��� ����ų� �ּ� ó�� �ϼž� �մϴ�.
	*/
	//freopen("input.txt", "r", stdin);
	cin >> T;
	/*
	   ���� ���� �׽�Ʈ ���̽��� �־����Ƿ�, ������ ó���մϴ�.
	*/
	for (test_case = 1; test_case <= T; ++test_case)
	{
		int input;
		

		//�Է�
		cin >> n;
		for (int i = 0; i < n * n; i++) {
			vector<int> student;
			for (int j = 0; j < 5; j++) {
				cin >> input;
				student.push_back(input);
			}
			students.push_back(student);
		}

		//���� �� ����
		vector<vector<int>> map(n, vector<int>(n, 0));
		
		//���� 
		// part1. Ž��
		for (int i = 0; i < n * n; i++) {
			takeAseat(i, map, n);
		}
	
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}
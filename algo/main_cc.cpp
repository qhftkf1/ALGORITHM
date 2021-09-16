#include "programmers.h"

using namespace std;

vector<int> solution(vector<int> a, vector<int> b);
int main(void) {
	vector<int> entrance;
	vector<int> leave;
	string s="";
	while (s != "\n") {
		getline(cin, s);
	}
	solution(entrance, leave);
}
#include<bits/stdc++.h>

using namespace std;
int main(void)
{
	char s[10001];
	char input;

	int i = 0;
	int flag;
	flag = 0;
	while (1) 
	{
		scanf_s("%1c", &input);
		s[i] = input;
		if (input == '\n' && flag == 1)
			break;
		else if (input == ' ' && flag == 0)
			flag = 1;
		else flag = 0;
		i++;
	}
}
/*
"100-200*300" -> 60420
"50*6-3*2" -> 60420

-+*
q1 = 400 600 -400
q2 = +*
vector<int> {20020}
vecotr<char> {} 

YS feedback:
    | 연산자 우선순위
    | 큐 끝부분 처리

*/


#include <string>
#include <vector>
#include <string.h>
#include <iostream>
#include <cstdlib>

using namespace std;

long long solution(string expression) 
{
    long long answer = 0;
    char s[1000];
    vector<int> operand_{};
    vector<char> operator_{};
    char* context;
    char* token;
    char idx = 0;

    strcpy_s(s, expression.c_str());
    while (s[idx]) 
    {
        if (s[idx] == '+')
            operator_.push_back('+');
        else if(s[idx] == '-')
            operator_.push_back('-');
        else if(s[idx] == '*')
            operator_.push_back('*');
        idx++;
    }
    token = strtok_s(s, "+-*", &context);
    while (token != NULL)
    {
        operand_.push_back(atoi(token));
        cout << atoi(token) << endl;
        token = strtok_s(NULL, "+-*", &context);
    }
    cout << operand_.size() << endl;
    cout << operator_.size() << endl;
    return answer;
}

int main(void)
{
    string s = "100-200*300-500+20";
    long long result;
    
    result = solution(s);
}
/*
"100-200*300" -> 60420
"50*6-3*2" -> 60420

-+*
q1 = 400 600 -400
q2 = +*
vector<int> {20020}
vecotr<char> {} 

YS feedback:
    | ������ �켱����
    | ť ���κ� ó��

++    �̹� �������� ��� �� 
1) string ó��
2) ���� ����� (erase)
3) next_permutation �Լ� �̿�(����)
4) for(char c : expressiong)���� ��� ����
*/

/*
#include <string>
#include <vector>
#include <string.h>
#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

long long solution(string expression) 
{
    long long answer = 0;
    vector<long long> operand_{};
    vector<char> operator_{};
    vector<char> pri_op_{};
    string num;
    long long max_value;

    for (char c : expression)
    {
        if (c == '+' || c == '-' || c == '*')
        {
            operand_.push_back((long long)stoi(num));
            if (find(pri_op_.begin(), pri_op_.end(), c) == pri_op_.end())
                pri_op_.push_back(c);
            operator_.push_back(c);
            num = "";
         }
        else
            num += c;
    }
    operand_.push_back((long long)stoi(num));

    sort(pri_op_.begin(), pri_op_.end());
 
    
    
    max_value = 0;
    do
    {
        vector<long long> num_ = operand_;
        vector<char> op_ = operator_;
        for (char c : pri_op_) 
        {
            for (int idx = 0; idx < op_.size(); idx++)
            {
                if (c == op_[idx])
                {
                    if (c == '+')
                        num_[idx] += num_[idx + 1];
                    if (c == '-')
                        num_[idx] -= num_[idx + 1];
                    if (c == '*')
                        num_[idx] *= num_[idx + 1];
                    num_.erase(num_.begin() + idx + 1);
                    op_.erase(op_.begin() + idx);
                    idx--;
                } 
            }
        }
        max_value = max(max_value, abs(num_[0]));
    } while (next_permutation(pri_op_.begin(), pri_op_.end()));

    return max_value;
}
*/
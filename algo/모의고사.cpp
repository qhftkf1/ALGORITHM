/*
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int fn_max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int count_comp(vector<int>answers, vector<int> forgive_score)
{
    int i, j, count;

    i = 0;
    j = 0;
    count = 0;
    while (i < answers.size())
    {
        if (j == forgive_score.size())
            j = 0;
        if (answers[i] == forgive_score[j])
            count++;
        i++, j++;
    }
    return count;
}
vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> a1{1, 2, 3, 4, 5 };
    vector<int> a2{2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> a3{3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    int answer_a1;
    int answer_a2;
    int answer_a3;
    int max;
    int i;

    i = 0;
    max = -1;
    answer_a1 = count_comp(answers, a1);
    answer_a2 = count_comp(answers, a2);
    answer_a3 = count_comp(answers, a3);
    max = fn_max(answer_a1, fn_max(answer_a2, answer_a3));
    if (max == answer_a1)
        answer.push_back(1);
    if (max == answer_a2)
        answer.push_back(2);
    if (max == answer_a3)
        answer.push_back(3);
    return answer;
}
*/
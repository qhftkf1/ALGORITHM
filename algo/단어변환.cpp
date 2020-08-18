#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
vector<int> check(51);
int cnt = 0;
int min_value = 2e9;
int fn_compare(string a, string b) {
    int count = 0;
    int i = 0;
    while (i < a.length()) {
        if (a[i] != b[i])
            count++;
        i++;
    }
    return count;
}

int solution(string begin, string target, vector<string> words) {
    if (find(words.begin(), words.end(), target) == words.end())
        return 0;
    if (begin == target) {
        if (min_value > cnt)
            min_value = cnt;
    }
    for (int i = 0; i < words.size(); i++) {
        if (fn_compare(begin, words[i]) == 1 && check[i] == 0) {
            check[i] = 1; cnt++;
            solution(words[i], target, words);
            check[i] = 0; cnt--;
        }
    }
    return min_value;
}

int main(void) {
    string begin = "hit";
    string target = "coo";

    vector<string> words = { "hot", "dot", "dog", "lot", "log", "cog" };

    cout << solution(begin, target, words);
}
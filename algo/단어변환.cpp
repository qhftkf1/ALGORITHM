#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;
vector<int> check(51);
int count = 0;
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
int dfs(string begin, string target, vector<string> words) {
    if (begin == target)
        return count;
    for (int i = 0; i < words.size(); i++) {
        if()
    }
}
int solution(string begin, string target, vector<string> words) {
    int answer = 0;
    cout << fn_compare(begin, target);
    return answer;
}

int main(void) {
    string begin = "hit";
    string target = "cog";

    vector<string> words = { "hot", "dot", "dog", "lot", "log", "cog" };

    cout << solution(begin, target, words);
}
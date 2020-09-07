#include<bits/stdc++.h>

using namespace std;

int trie[1000001][26] = { 0 };
int tag;
int cnt[1000001] = { 0 };
void insert_trie(string s, int node, int idx) { 
    if (idx == s.size())
        return;
    int next = s[idx] - 'a';
    if (!trie[node][next])
        trie[node][next] = tag++;
    cnt[trie[node][next]]++;
    return insert_trie(s, trie[node][next], idx + 1);
}

int solution(vector<string> words) {
    int answer = 0;
    tag = 1;
    for (string s : words)
        insert_trie(s, 0, 0);
    for (string s : words) {
        int node = 0;
        for (int i = 0; i < s.size(); i++) {       
            if (cnt[node] == 1)
                break;
            int tmp = s[i] - 'a';
            node = trie[node][tmp];
            answer++;
        }
    }
    return answer;
}

int main(void) {
    vector<string> words = { "g","a","b" };
    cout << solution(words);
}

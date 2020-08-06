#include <string>
#include <vector>
#include <iostream>
using namespace std;

vector<char> recursive_parcel(vector<char> parcel) {
    vector<char> u;
    vector<char> v;
    vector<char> v_par;
    vector<char> result;

    int count = 0;
    int flag = 0;
    int v_is = 0;
    if (parcel.size() == 0)
        return parcel;
    for (char c : parcel)
    {
        if (c == '(' && v_is == 0) {
            count++; flag = 1;
        }
        else if (c == ')' && v_is == 0) {
            count--; flag = 0;
        }
        if (v_is == 1) {
            v.push_back(c);
        }
        else {
            u.push_back(c);
        }
        if (count == 0)
            v_is = 1;
    }
    v_par = recursive_parcel(v);
    if (count == 0 && flag == 1) {
        result.push_back('(');
        for (char c : v_par) {
            result.push_back(c);
        }
        result.push_back(')');
        u.erase(u.begin());
        u.erase(u.begin() + u.size() - 1);
        for (char c : u) {
            if(c == '(')
                result.push_back(')');
            else
                result.push_back('(');
        }
    }
    else {
        result = u;
        for (char c : v_par) {
            result.push_back(c);
        }
    }
    return result;
}

string solution(string p) {
    string answer = "";
    
    vector <char> parcel;

    for (char c : p){
        parcel.push_back(c);
    }
    parcel = recursive_parcel(parcel);
    for (char c : parcel) {
        answer += c;
    }
    return answer;
}

//int main(void){
//    string str = "(()())()";
//    string result;
//    result = solution(str);
//    cout << result << endl;
//}
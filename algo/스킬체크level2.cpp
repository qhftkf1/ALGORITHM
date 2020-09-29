//#include <string>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
//    int n = arr1.size();
//    int m = arr2.size();
//    vector<vector<int>> answer(arr1.size());
//
//    for (int i = 0; i < arr1.size(); i++) {
//        vector<int> tmp(arr2[0].size());
//        answer[i] = tmp;
//        for (int j = 0; j < arr2[0].size(); j++) {
//            for (int k = 0; k < m; k++) {
//                answer[i][j] += arr1[i][k] * arr2[k][j];
//            }
//        }
//    }
//    return answer;
//}
//int main(void) {
//    vector<vector<int>> arr1{ {1,4}, {3, 2}, {4, 1} };
//    vector<vector<int>> arr2{ {3,3}, {3, 3} };
//    solution(arr1, arr2);
//}
//#include<bits/stdc++.h>
//using namespace std;
//
//int solution(vector<vector<int>> board, vector<int> moves) {
//    int cnt = 0;
//    vector<int> res;
//    for (int i = 0; i < moves.size(); i++) {
//        for (int j = 0; j < board.size(); j++) {
//            if (board[j][moves[i] - 1] != 0) {
//                if (!res.empty() && res.back() == board[j][moves[i] - 1]){
//                    res.erase(res.end() - 1);cnt += 2;
//                }else
//                    res.push_back(board[j][moves[i] - 1]);
//                board[j][moves[i] - 1] = 0;
//                break;
//            }
//        }
//    }
//    return cnt;
//}

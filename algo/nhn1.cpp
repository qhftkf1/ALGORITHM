#include<bits/stdc++.h>

using namespace std;

void solution(int numOfAllPlayers, int numOfQuickPlayers, char* namesOfQuickPlayers, int numOfGames, int* numOfMovesPerGame) {
    vector<int> player(numOfAllPlayers);
    map<char, int> ma;
    char joker;
    queue<char> player_list;

    player_list.push('A');

}

struct input_data {
    int numOfAllPlayers;
    int numOfQuickPlayers;
    char* namesOfQuickPlayers;
    int numOfGames;
    int* numOfMovesPerGame;
};

void process_stdin(struct input_data& inputData) {
    string line;
    istringstream iss;

    getline(cin, line);
    iss.str(line);
    iss >> inputData.numOfAllPlayers;

    getline(cin, line);
    iss.clear();
    iss.str(line);
    iss >> inputData.numOfQuickPlayers;

    getline(cin, line);
    iss.clear();
    iss.str(line);
    inputData.namesOfQuickPlayers = new char[inputData.numOfQuickPlayers];
    for (int i = 0; i < inputData.numOfQuickPlayers; i++) {
        iss >> inputData.namesOfQuickPlayers[i];
    }

    getline(cin, line);
    iss.clear();
    iss.str(line);
    iss >> inputData.numOfGames;

    getline(cin, line);
    iss.clear();
    iss.str(line);
    inputData.numOfMovesPerGame = new int[inputData.numOfGames];
    for (int i = 0; i < inputData.numOfGames; i++) {
        iss >> inputData.numOfMovesPerGame[i];
    }
}

int main() {
    struct input_data inputData;
    process_stdin(inputData);

    solution(inputData.numOfAllPlayers, inputData.numOfQuickPlayers, inputData.namesOfQuickPlayers, inputData.numOfGames, inputData.numOfMovesPerGame);
    return 0;
}
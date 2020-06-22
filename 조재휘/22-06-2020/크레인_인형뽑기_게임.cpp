#include <string>
#include <vector>

using namespace std;

int pickup(vector<vector<int>> &board, int move) {
    int size = board.size(), doll = 0;
    for (int i = 0; i < size; ++i) {
        if (board[i][move - 1] != 0) {
            doll = board[i][move - 1];
            board[i][move - 1] = 0;
            break;
        }
    }
    return doll;
}

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0, doll;
    vector<int> basket;
    for (vector<int>::iterator iter = moves.begin(); iter != moves.end(); ++iter) {
        doll = pickup(board, *iter);
        if (doll != 0) {
            basket.push_back(doll);
            if (basket.size() > 1) {
                if (*(basket.end() - 1) == *(basket.end() - 2)) {
                    basket.pop_back();
                    basket.pop_back();
                    answer += 2;
                }
            }
        }
    }
    return answer;
}

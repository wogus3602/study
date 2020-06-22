#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    vector<int> doll;
    int answer = 0;
    for(int i=0; i<moves.size(); i++){
        int col = moves[i]-1;
        for(int row=0; row<board[0].size(); row++){
            if(board[row][col]){
                doll.push_back(board[row][col]);
                board[row][col]=0;
                if(doll.size()>1 && doll[doll.size()-1] == doll[doll.size()-2]){
                    doll.pop_back();
                    doll.pop_back();
                    answer+=2;
                }
                break;
            }
        }
    }
    return answer;
}
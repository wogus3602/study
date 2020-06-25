#include <string>
#include <vector>
#include <stack>

using namespace std;

int solution(std::vector<std::vector<int>> board, std::vector<int> moves) {
	
	int answer = 0;
	int i;
	int board_size = board.size();
	stack<int> baguni;	// 인형을 옮겨 담을 바구니

	auto moves_iter = moves.begin();
	// moves 어디까지 실행했는지 가리킬 이터레이터

	for(; moves_iter != moves.end(); moves_iter++) {
		for(int i = 0; i < board_size; i++) {
			if(board[i][*moves_iter-1]) {
				if(!baguni.empty() && baguni.top() == board[i][*moves_iter-1]) {	
				// 같은 인형이라면
					answer += 2;		// 두 인형 터트림
					baguni.pop();		// 바구니에 있던 인형 하나 뺴기
				}
				else baguni.push(board[i][*moves_iter-1]);
				// 다른 인형이거나 바구니에 뭐가 없으면 바구니에 넣기
				board[i][(*moves_iter)-1] = 0;	// 바구니에 넣었으니 인형 없어짐	
				break;			
			}
		}
	}
	
	return answer;
}

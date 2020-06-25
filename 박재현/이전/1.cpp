#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves)
{
    int answer = 0;
    stack<int> result;

    for (auto move : moves)
    {
        for (int i = 0; i < board.size(); i++)
        {
            int num = board[i][move - 1];
            if (num != 0)
            {
                if (!result.empty())
                {
                    if (result.top() == num)
                    {
                        result.pop();
                        answer += 2;
                        board[i][move - 1] = 0;
                        break;
                    }
                }
                result.push(num);
                board[i][move - 1] = 0;
                break;
            }
        }
    }

    return answer;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << solution({{0, 0, 0, 0, 0}, {0, 0, 1, 0, 3}, {0, 2, 5, 0, 1}, {4, 2, 4, 4, 2}, {3, 5, 1, 3, 1}}, {1, 5, 3, 5, 1, 2, 1, 4});
}
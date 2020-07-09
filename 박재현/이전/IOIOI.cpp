#include <iostream>
#include <string>
using namespace std;

int main()
{
    int N, S;
    string M, s;
    int countO = 0;
    int answer = 0;

    cin >> N >> S >> M;

    for (int i = 0; i < M.size(); i++)
    {
        countO = 0;
        if (M[i] == 'I' and M[i + 1] == 'O')
        {
            countO++;
            while (true)
            {
                i += 2;
                if (M[i] == 'I' and countO == N)
                {
                    countO--;
                    answer++;
                }
                if (M[i + 1] == 'O' and M[i + 2] == 'I')
                    countO++;
                else
                    break;
            }
        }
    }

    cout << answer;

    return 0;
}
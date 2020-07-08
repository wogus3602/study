#include <iostream>
#include <vector>
using namespace std;
#define MAX 501
int main()
{
    int n, m;
    int friendss[MAX] = {0};
    bool friends[MAX][MAX] = {false};

    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            friends[i][j] = 0;

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        friends[a][b] = true;
        friends[b][a] = true;
    }

    for (int i = 2; i <= n; i++)
    {
        if (friends[1][i])
        {
            friendss[i] = 1;
            for (int j = 2; j <= n; j++)
                if (friends[i][j])
                    friendss[j] = 1;
        }
    }

    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        if (friendss[i] == 1)
            answer++;
    }

    cout << answer;

    return 0;
}
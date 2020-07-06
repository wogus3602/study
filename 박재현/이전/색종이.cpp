#include <iostream>
#include <vector>
using namespace std;
#define MAX 100

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num = 0;
    int answer = 0;
    int paper[MAX][MAX] = {0};

    cin >> num;

    for (int i = 0; i < num; i++)
    {
        int horizontalNum;
        int verticalNum;

        cin >> horizontalNum >> verticalNum;

        for (int x = horizontalNum; x < horizontalNum + 10; x++)
            for (int y = verticalNum; y < verticalNum + 10; y++)
                paper[x][y] = 1;
    }

    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (paper[i][j] == 1)
                answer++;
        }
    }

    cout << answer;

    return 0;
}
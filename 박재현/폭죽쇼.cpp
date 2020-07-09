#include <iostream>
using namespace std;

int main()
{
    int N, C;
    int arr[2000001] = {0};
    cin >> N >> C;

    for (int i = 0; i < N; i++)
    {
        int cycle;
        cin >> cycle;
        for (int i = cycle; i <= C; i += cycle)
        {
            arr[i] = 1;
        }
    }

    int answer = 0;
    for (int i = 0; i <= C; i++)
    {
        if (arr[i] == 1)
            answer++;
    }

    cout << answer;

    return 0;
}
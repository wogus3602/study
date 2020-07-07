#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int answer = 0;
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = i; i * j <= n; j++)
            answer++;

    cout << answer;

    return 0;
}
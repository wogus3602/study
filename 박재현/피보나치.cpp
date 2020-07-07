#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
#define MAX 501
int main()
{
    int n;
    int dp[1000001] = {0};

    cin >> n;

    dp[0] = 0;
    dp[1] = 1;

    if (n == 0)
    {
        cout << "0\n0";
        return 0;
    }

    for (int i = 2; i <= abs(n); i++)
    {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 1000000000;
    }

    if (n > 0)
    {
        cout << "1"
             << "\n"
             << dp[abs(n)];
    }
    else
    {
        if (abs(n) % 2 == 0)
            cout << "-1"
                 << "\n"
                 << dp[abs(n)];
        else
            cout << "1"
                 << "\n"
                 << dp[abs(n)];
    }

    return 0;
}
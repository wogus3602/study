#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int mentalNumber;
    vector<string> ve;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        ve.push_back(str);
    }

    cin >> mentalNumber;

    if (mentalNumber == 1)
    {
        for (auto x : ve)
            cout << x << "\n";
    }
    else if (mentalNumber == 2)
    { // 좌우
        for (int i = 0; i < n; i++)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << ve[i][j];
            }
            cout << "\n";
        }
    }
    else if (mentalNumber == 3)
    { // 상하
        for (int i = n - 1; i >= 0; i--)
        {
            for (int j = 0; j < n; j++)
            {
                cout << ve[i][j];
            }
            cout << "\n";
        }
    }

    return 0;
}
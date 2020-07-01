#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<string> ve;
    int maxLength = 0;

    for (int i = 0; i < 5; i++)
    {
        string row;
        cin >> row;

        if (maxLength < row.size())
        {
            maxLength = row.size();
        }

        ve.push_back(row);
    }

    for (int i = 0; i < maxLength; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (ve[j][i] != NULL)
            {
                cout << ve[j][i];
            }
        }
    }
}
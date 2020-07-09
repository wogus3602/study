#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

int main()
{
    int R, C;
    vector<string> ve;
    set<string> se;
    int count = 0;
    cin >> R >> C;

    for (int i = 0; i < R; i++)
    {
        string s;
        cin >> s;
        ve.push_back(s);
    }

    int start = 0;
    int end = R - 1;
    int mid;

    bool trace;
    while (start <= end)
    {
        mid = (start + end) / 2;
        bool check = true;
        for (int j = 0; j < C; j++)
        {
            string s = "";

            for (int i = mid; i < R; i++)
            {
                s += ve[i][j];
            }

            if (se.find(s) == se.end())
            {
                se.insert(s);
            }
            else
            {
                check = false;
                break;
            }
        }

        if (!check)
            end = mid - 1;
        else
            start = mid + 1;

        trace = check;
        se.clear();
    }

    if (!trace)
        cout << mid - 1 << "\n";
    else
        cout << mid;
    return 0;
}
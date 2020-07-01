#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int answer1 = 0;
    int answer2 = 0;
    string str;

    cin >> str;

    // cout << count(str.begin(), str.end(), 'J') << "\n";

    for (int i = 0; i < str.size() - 2; i++)
    {
        if (str[i] == 'I' and str[i + 1] == 'O' and str[i + 2] == 'I')
        {
            answer1++;
            i += 1;
        }
        else if (str[i] == 'J' and str[i + 1] == 'O' and str[i + 2] == 'I')
        {
            answer2++;
            i += 1;
        }
    }

    cout << answer2 << '\n'
         << answer1;

    return 0;
}
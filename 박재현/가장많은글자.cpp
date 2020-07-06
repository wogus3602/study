#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int alphabet[26] = {0};
    int maxN = 0;
    vector<char> answer;
    string str;

    while (cin >> str)
    {
        for (auto x : str)
        {
            alphabet[x - 'a']++;
        }
        str.clear();
    }

    for (int i = 0; i < 26; i++)
    {
        maxN = max(alphabet[i], maxN);
    }
    for (int i = 0; i < 26; i++)
    {
        if (alphabet[i] == maxN)
            answer.push_back('a' + i);
    }
    sort(answer.begin(), answer.end());

    for (auto x : answer)
    {
        cout << x;
    }

    return 0;
}
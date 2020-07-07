#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string str;
    int happy = 0;
    int sad = 0;
    getline(cin, str);

    int size = str.length();

    if (size < 3)
    {
        cout << "none";
        return 0;
    }

    for (int i = 0; i <= size - 2; i++)
    {
        if (str.substr(i, 3) == ":-)")
        {
            happy++;
            i += 2;
        }
        else if (str.substr(i, 3) == ":-(")
        {
            sad++;
            i += 2;
        }
    }

    if (sad > happy)
    {
        cout << "sad";
    }
    else if (sad < happy)
    {
        cout << "happy";
    }
    else if (sad == happy)
    {
        cout << "unsure";
    }
    else
    {
        cout << "none";
    }

    return 0;
}
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num;
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        string str1;
        string str2;

        cin >> str1 >> str2;

        cout << "Distances:";

        for (int j = 0; j < str1.size(); j++)
        {
            int distances;
            distances = str2[j] - str1[j];

            if (distances < 0)
            {
                distances += 26;
            }

            cout << " " << distances;
        }
        cout << "\n";
    }

    return 0;
}
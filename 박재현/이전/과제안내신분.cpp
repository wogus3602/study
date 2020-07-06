#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int student[31] = {0};

    for (int i = 0; i < 28; i++)
    {
        int num;

        cin >> num;

        student[num] = 1;
    }

    for (int i = 1; i <= 30; i++)
    {
        if (student[i] == 0)
            cout << i << '\n';
    }
}
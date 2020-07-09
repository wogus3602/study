#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10];
    // 3 , 3 , 3 , 3 , 3 , 4 , 3 , 4
    for (int i = 1; i < 10; i++)
    {
        int error;
        cin >> error;
        arr[error] = i;
    }

    string s;
    cin >> s;
    int check = 0;
    for (auto x : s)
    {
        int num, n;
        // s 24 => 2
        // t 25 => 22  19
        // u           20
        // v 27 = >    21
        // w 28 => 25
        // x 29
        // y 30  24
        if (x == 's')
        {
            num = 21;
            n = 3;
        }
        else if (x >= 't' and x <= 'y')
        {
            num = x - 'a' + 5;
            n = (x - 'a' - 1) % 3;
        }
        else if (x == 'z')
        {
            num = 27;
            n = 3;
        }
        else
        {
            num = x - 'a' + 6;
            n = (x - 'a') % 3;
        }

        if (num / 3 == check)
            cout << '#';

        for (int i = 0; i <= n; i++)
        {
            cout << arr[num / 3];
        }
        check = num / 3;
    }

    return 0;
}
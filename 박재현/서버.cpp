#include <iostream>
using namespace std;

int main()
{
    int n, T;
    int totalTime = 0;
    int i;
    cin >> n >> T;

    for (i = 0; i < n; i++)
    {
        int time;
        cin >> time;

        totalTime += time;
        if (totalTime >= T)
        {
            cout << i;
            return 0;
        }
    }

    cout << i;

    return 0;
}
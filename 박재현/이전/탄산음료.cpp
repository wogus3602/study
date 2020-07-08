#include <iostream>
using namespace std;

int main()
{
    int e, f, c, total = 0;
    cin >> e >> f >> c;

    int emptyCola = e + f;

    while (emptyCola >= c)
    {
        total += emptyCola / c;
        emptyCola = emptyCola / c + emptyCola % c;
    }
    cout << total << '\n';

    return 0;
}
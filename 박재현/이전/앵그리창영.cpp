#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main()
{
    int N, W, H;
    vector<int> ve;
    int diagonal;
    cin >> N >> W >> H;

    diagonal = sqrt(W * W + H * H);

    for (int i = 0; i < N; i++)
    {
        int S;
        cin >> S;

        if (diagonal >= S)
        {
            cout << "DA"
                 << "\n";
        }
        else
        {
            cout << "NE"
                 << "\n";
        }
    }

    return 0;
}
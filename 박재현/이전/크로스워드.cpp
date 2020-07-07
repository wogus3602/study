#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string A;
    string B;

    int saveI;
    int saveJ;
    bool check = false;
    cin >> A >> B;

    for (int i = 0; i < A.size(); i++)
    {
        for (int j = 0; j < B.size(); j++)
        {
            if (A[i] == B[j])
            {
                saveI = i;
                saveJ = j;
                check = true;
                break;
            }
        }
        if (check)
            break;
    }

    int a = 0;
    int b = 0;
    for (int i = 0; i < B.size(); i++)
    {
        for (int j = 0; j < A.size(); j++)
        {
            if (i == saveJ and j == saveI)
            {
                cout << B[b++];
                a++;
            }
            else if (i == saveJ)
            {
                cout << A[a++];
            }
            else if (j == saveI)
            {
                cout << B[b++];
            }
            else
            {
                cout << ".";
            }
        }
        cout << "\n";
    }
    return 0;
}
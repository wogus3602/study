#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool check[7] = {false};
int arr[7] = {0};
vector<string> ve;
vector<vector<string>> answer;

void permutation(int cnt)
{
    if (cnt == 3)
    {
        vector<string> temp;
        vector<string> answerTemp;

        for (int i = 0; i < 3; i++)
        {
            temp.push_back(ve[arr[i]]);
        }
        answerTemp = temp;
        for (int i = 0; i < 3; i++)
        {
            string st;
            for (int j = 0; j < 3; j++)
            {
                st += temp[j][i];
            }
            temp.push_back(st);
        }
        sort(temp.begin(), temp.end());

        bool check = true;
        for (int i = 0; i < 6; i++)
        {
            if (temp[i] != ve[i])
            {
                check = false;
                break;
            }
        }

        if (check)
        {
            answer.push_back(answerTemp);
        }
        return;
    }
    for (int i = 0; i < 6; i++)
    {
        if (!check[i])
        {
            check[i] = true;
            arr[cnt] = i;
            permutation(cnt + 1);
            check[i] = false;
        }
    }
}

int main()
{

    for (int i = 0; i < 6; i++)
    {
        string s;
        cin >> s;
        ve.push_back(s);
    }

    permutation(0);

    if (answer.size() == 0)
    {
        cout << "0";
        return 0;
    }
    sort(answer.begin(), answer.end());

    for (int i = 0; i < 3; i++)
    {
        cout << answer[0][i] << "\n";
    }

    return 0;
}
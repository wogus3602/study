#include <iostream>
#include <string>
#include <vector>
using namespace std;

int check[10] = {0};
int arr[4] = {0};

int answer = 0;

bool isCheck(int baseballNum, int strike, int ball)
{

    int num3 = baseballNum % 10;
    int num2 = (baseballNum / 10) % 10;
    int num1 = (baseballNum / 100);

    int checkStrike = 0;
    if (num3 == 0 and num2 == 0 and num1 == 0)
        return false;
    if (arr[2] == num3)
        checkStrike++;
    if (arr[1] == num2)
        checkStrike++;
    if (arr[0] == num1)
        checkStrike++;

    int checkBall = 0;
    if ((arr[2] == num2) or (arr[2] == num1))
        checkBall++;
    if ((arr[1] == num3) or (arr[1] == num1))
        checkBall++;
    if ((arr[0] == num3) or (arr[0] == num2))
        checkBall++;

    if (strike == checkStrike and ball == checkBall)
        return true;
    return false;
}

void permutation(int cnt, vector<vector<int>> baseball)
{
    if (cnt == 3)
    {
        for (auto x : baseball)
        {
            if (!isCheck(x[0], x[1], x[2]))
                return;
        }
        answer++;
        return;
    }
    for (int i = 1; i <= 9; i++)
    {
        if (!check[i])
        {
            check[i] = 1;
            arr[cnt] = i;
            permutation(cnt + 1, baseball);
            check[i] = 0;
        }
    }
}

int solution(vector<vector<int>> baseball)
{

    permutation(0, baseball);
    return answer;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << solution({{123, 1, 1}, {356, 1, 0}, {327, 2, 0}, {489, 0, 1}});
}
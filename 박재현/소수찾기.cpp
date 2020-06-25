#include <string>
#include <vector>
using namespace std;
vector<bool> check;
vector<int> ve;

void getDecimal(int n)
{
    //에라토스테네스의 체
    check.resize(n + 1, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (!check[i])
            continue;
        for (int j = i * i; j <= n; j += i)
        {
            check[j] = false;
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (check[i])
            ve.push_back(i);
    }
}

int solution(int n)
{
    int answer = 0;

    getDecimal(n);
    answer = ve.size();
    return answer;
}
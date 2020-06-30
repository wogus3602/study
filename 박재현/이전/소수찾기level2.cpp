#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <cmath>
using namespace std;
#define MAX 1000000001

vector<bool> check;
vector<int> ve;

void getPrimeNumber(int n)
{
    //에라토스테네스의 체
    check.resize(n + 1, true);
    check[0] = false;
    check[1] = false;
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

int solution(string numbers)
{
    int answer = 0;
    sort(numbers.begin(), numbers.end());
    set<int> setArray;
    getPrimeNumber(pow(10, numbers.size()));
    do
    {
        for (int i = 1; i <= numbers.size(); i++)
        {
            string num = numbers.substr(0, i);
            if (check[stoi(num)])
            {
                setArray.insert(stoi(num));
            }
        }
    } while (next_permutation(numbers.begin(), numbers.end()));

    answer = setArray.size();
    return answer;
}

int main()
{
    cout << solution("17");
}
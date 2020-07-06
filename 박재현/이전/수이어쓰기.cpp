#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int answer = 0;
    int cnt = 9;
    string num;

    cin >> num;

    if (num.size() == 1)
    {
        cout << stoi(num);
        return 0;
    }

    for (int i = 0; i < num.size() - 1; i++)
    {
        answer += cnt * (i + 1);
        cnt *= 10;
    }

    cnt /= 9;
    answer += (stoi(num) - cnt + 1) * num.size();

    cout << answer;
    return 0;
}
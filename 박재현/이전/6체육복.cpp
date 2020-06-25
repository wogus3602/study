#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;

    for (int i = 0; i < lost.size(); i++)
    {
        for (int j = 0; j < reserve.size(); j++)
        {
            if (lost[i] == reserve[j])
            {
                reserve.erase(reserve.begin() + j);
                lost.erase(lost.begin() + i);
                break;
            }
        }
    }

    for (auto lostNum : lost)
    {
        for (int i = 0; i < reserve.size(); i++)
        {
            if (lostNum == reserve[i] or lostNum - 1 == reserve[i] or lostNum + 1 == reserve[i])
            {
                reserve.erase(reserve.begin() + i);
                answer++;
                break;
            }
        }
    }
    answer = n - lost.size() + answer;
    return answer;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cout << solution(5, {2, 3}, {3, 4});
}
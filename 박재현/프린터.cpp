#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> priorities, int location)
{
    int answer = 0;
    bool flag = false;
    vector<pair<int, int>> prioritiesTemp;
    int num = 0;
    int saveLocation = 0;
    for (auto x : priorities)
        prioritiesTemp.push_back(make_pair(x, num++));

    while (!prioritiesTemp.empty())
    {
        int num = prioritiesTemp.front().first;

        saveLocation = 0;
        for (int i = 0; i < prioritiesTemp.size(); i++)
        {
            if (num < prioritiesTemp[i].first)
            {
                num = prioritiesTemp[i].first;
                saveLocation = i;
            }
        }
        answer++;

        if (location == prioritiesTemp[saveLocation].second)
        {
            return answer;
        }
        prioritiesTemp.erase(prioritiesTemp.begin() + saveLocation);
        rotate(prioritiesTemp.begin(), prioritiesTemp.begin() + saveLocation, prioritiesTemp.end());
    }

    return answer;
}
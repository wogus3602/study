#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands)
{
    vector<int> answer;

    for (auto command : commands)
    {
        vector<int> ve;
        for (int i = command[0] - 1; i <= command[1] - 1; i++)
        {
            ve.push_back(array[i]);
        }
        sort(ve.begin(), ve.end());
        answer.push_back(ve[command[2] - 1]);
    }
    return answer;
}
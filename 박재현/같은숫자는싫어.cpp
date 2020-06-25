#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int prev = -1;
    for (auto x : arr)
    {
        if (x != prev)
        {
            prev = x;
            answer.push_back(x);
        }
    }

    return answer;
}
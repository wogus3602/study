#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int solution(vector<int> scoville, int K)
{
    int answer = 0;
    int scovilleScale = 0;
    priority_queue<int, vector<int>, greater<int>> scovilleQueue;

    for (auto x : scoville)
        scovilleQueue.push(x);

    while (scovilleQueue.top() < K)
    {
        if (scovilleQueue.empty() or scovilleQueue.size() < 2)
        {
            return -1;
        }
        auto food1 = scovilleQueue.top();
        scovilleQueue.pop();
        auto food2 = scovilleQueue.top();
        scovilleQueue.pop();

        int newScoville = food1 + (food2 * 2);
        scovilleQueue.push(newScoville);

        answer++;
    }

    return answer;
}
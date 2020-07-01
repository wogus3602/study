#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit)
{
    int answer = 0;

    sort(people.begin(), people.end()); // 50 50 70 80

    int left = 0;
    int right = people.size() - 1;

    while (left <= right)
    { // 겹치는 순간 멈춤
        if (people[left] + people[right] <= limit)
        {
            left++;
        }
        right--;
        answer++;
    }

    return answer;
}
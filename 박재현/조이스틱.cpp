#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int answerTemp;
int check[21] = {0};
int nextLocation(string name, int location)
{
    answerTemp = 0;
    int prev = location;
    int next = location;
    while (true)
    {
        prev -= 1;
        next += 1;
        int size = name.size();
        answerTemp++;
        if (prev < 0)
        {
            prev = size - 1;
        }
        if (next == size)
        {
            next = 0;
        }

        if (name[next] == 'A' and name[prev] == 'A')
        {
            continue;
        }
        else if (name[next] != 'A' and !check[next])
        {
            return next;
        }
        else if (name[prev] != 'A' and !check[prev])
        {
            return prev;
        }
    }
}

int solution(string name)
{
    string answerName;
    int answer = 0;
    int location = 0;
    int size = name.size();
    //13 N

    for (int i = 0; i < size; i++)
    {
        answerName += "A";
    }

    while (true)
    {
        // 위 아래
        answer += min(name[location] - 'A', 'Z' - name[location] + 1);

        check[location] = 1;
        answerName[location] = name[location];

        // 좌 우
        // JABBAA
        answer += answerTemp;
        if (name == answerName)
            break;
        location = nextLocation(name, location);
    }

    return answer;
}

int main()
{
    cout << solution("AABAAAAAAABBB");
}
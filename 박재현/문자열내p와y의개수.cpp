#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pCount = 0;
    int yCount = 0;

    for (auto x : s)
    {
        if (x == 'p' or x == 'P')
            pCount++;
        else if (x == 'y' or x == 'Y')
            yCount++;
    }

    if (pCount == yCount)
        answer = true;
    else
        answer = false;

    return answer;
}
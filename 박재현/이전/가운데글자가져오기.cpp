#include <string>
#include <vector>

using namespace std;

string solution(string s)
{
    string answer = "";
    int size = s.size();

    if (size % 2 == 0)
    {
        answer += s[size / 2 - 1];
        answer += s[size / 2];
    }
    else
    {
        answer += s[size / 2];
    }
    return answer;
}
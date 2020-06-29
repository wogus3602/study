#include <string>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    if (s.size() != 4 and s.size() != 6)
        return false;
    for (auto x : s)
    {
        if (!isdigit(x))
            return false;
    }

    return true;
}
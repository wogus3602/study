#include <string>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int p_count = 0, y_count = 0; 
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == 'P' || s[i] == 'p') {
            ++p_count;
            continue;
        }
        if (s[i] == 'Y' || s[i] == 'y') {
            ++y_count;
        }
    }
    if (p_count != y_count) {
        answer = false;
    }
    return answer;
}

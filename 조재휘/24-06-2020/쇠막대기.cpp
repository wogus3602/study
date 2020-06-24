#include <string>
#include <vector>

using namespace std;

int solution(string arrangement) {
    int answer = 0;
    vector<char> stack;
    for (int i = 0; i < arrangement.size() - 1; ++i) {
        if ((arrangement[i] == '(') && (arrangement[i + 1] == ')')) {
            answer += stack.size();
            ++i;
            continue;
        }
        if (arrangement[i] == '(') {
            stack.push_back(arrangement[i]);
            continue;
        }
        if (arrangement[i] == ')') {
            stack.pop_back();
            answer += 1;
        }
    }
    answer += stack.size();
    return answer;
}

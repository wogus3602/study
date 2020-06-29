#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    string local_max;
    int digit = number.size() - k, local_max_idx, prev_local_max_idx = 0;
    for (int i = 0; i < number.size() - k; ++i) {
        local_max_idx = number.size() - digit;
        local_max = number[local_max_idx];
        for (int j = local_max_idx; j >= prev_local_max_idx; --j) {
            if (local_max[0] <= number[j]) {
                local_max = number[j];
                local_max_idx = j;
            }
        }
        answer.append(local_max);
        prev_local_max_idx = ++local_max_idx;
        --digit;
    }
    return answer;
}

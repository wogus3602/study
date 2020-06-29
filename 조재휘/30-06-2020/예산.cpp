#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int total_sum = 0;
    sort(d.begin(), d.end(), greater<int>());
    for (auto iter = d.begin(); iter != d.end(); ++iter) {
        total_sum += *iter;
    }
    for (int i = 0; i < d.size(); ++i) {
        if (total_sum <= budget) {
            answer = d.size() - i;
            break;
        }
        total_sum -= d[i];
    }
    return answer;
}

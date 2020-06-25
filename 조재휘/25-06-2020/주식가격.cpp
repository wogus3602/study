#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int increase_time;
    for (int i = 0; i < prices.size() - 1; ++i) {
        increase_time = 0;
        for (int j = i + 1; j < prices.size(); ++j) {
            if (prices[j] < prices[i]) {
                break;
            }
            ++increase_time;
        }
        if (increase_time == 0) {
            ++increase_time;
        }
        answer.push_back(increase_time);
    }
    answer.push_back(0);
    return answer;
}

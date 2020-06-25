#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool is_prime;
    vector<int> prime;
    prime.push_back(2);
    for (int i = 3; i <= n; ++i) {
        is_prime = true;
        for (auto iter = prime.begin(); ((*iter) * (*iter)) <= i; ++iter) {
            if ((i % (*iter)) == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) {
            prime.push_back(i);
        }
    }
    answer = prime.size();
    return answer;
}

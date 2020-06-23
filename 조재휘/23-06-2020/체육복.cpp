#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    bool *take = new bool[n + 1];
    for (int i = 0; i <= n; ++i) {
        take[i] = true;
    }
    for (vector<int>::iterator iter = lost.begin(); iter != lost.end(); ++iter) {
        take[*iter] = false;
    }
    for (vector<int>::iterator iter = reserve.begin(); iter != reserve.end();) {
        if (take[*iter] == false) {
            take[*iter] = true;
            iter = reserve.erase(iter);
        }
        else {
            ++iter;
        }
    }
    for (vector<int>::iterator iter = reserve.begin(); iter != reserve.end(); ++iter) {
        if ((*iter > 1) && (take[*iter - 1] == false)) {
            take[*iter - 1] = true;
            continue;
        }
        if ((*iter < n) && (take[*iter + 1] == false)) {
            take[*iter + 1] = true;
        }
    }
    for (int i = 1; i <= n; ++i) {
        if (take[i]) {
            ++answer;
        }
    }
    return answer;
}

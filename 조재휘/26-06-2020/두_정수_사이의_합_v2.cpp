#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long min = a, max = b;
    if (min > max) {
        long long tmp = min;
        min = max;
        max = tmp;
    }
    answer = (min + max) * (max - min + 1) / 2;
    return answer;
}

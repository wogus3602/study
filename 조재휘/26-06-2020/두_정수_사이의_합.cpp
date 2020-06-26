#include <string>
#include <vector>

using namespace std;

long long zero_to_n(long long n) {
    if (n >= 0) {
        return n * (n + 1) / 2;
    }
    if (n < 0) {
        return -1 * (n * (n - 1) / 2);
    }
}

long long solution(int a, int b) {
    long long answer = 0;
    long long large, small;
    if (a >= b) {
        large = a;
        small = b;
    }
    else {
        large = b;
        small = a;
    }
    if (large >= 0) {
        if (small > 0) {
            answer = zero_to_n(large) - zero_to_n(small - 1);
        }
        else {
            answer = zero_to_n(large) + zero_to_n(small);
        }
    }
    else {
        answer = zero_to_n(small) - zero_to_n(large + 1);
    }
    return answer;
}

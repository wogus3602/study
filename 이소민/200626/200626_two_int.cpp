#include <string>
#include <vector>

using namespace std;

void swap(long* a, long* b);
    
long long solution(int a, int b) {
    long long answer = 0;
    long long_a = a;
    long long_b = b;
    
    swap(&long_a, &long_b);
    
    for(long i = long_a; i <= long_b; i++) {
        answer += i;
    }
    
    return answer;
}

void swap(long* a, long* b) {
    if(*a < *b) return;
    
    long temp = *a;
    *a = *b;
    *b = temp;
}

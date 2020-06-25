// https://programmers.co.kr/learn/courses/30/lessons/12921
#include <string>
#include <vector>
using namespace std;

bool sosu(int n);

int solution(int n) {
    int answer = 0;
    vector<bool> arr(n,true);
    
    for(int i = 2; i <= n; i++) {
        if(arr[i]) {
            for(int j = 2; j <= n/i; j++) {
                arr[i*j] = false;
            }
        }
    }
	// 에라토스테네스의 체?
    
    for(int i = 2; i <= n; i++) {
        if(arr[i]) answer++;
    }
    
    return answer;
}

#include <string>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int> > scoville_heap;
    int sSize = scoville.size();
    int min_s, second_s, mix_s;
    bool cant_K = true;
    
    for(int i = 0; i < sSize; i++) {
        scoville_heap.push(scoville[i]);
    }
    
    while(scoville_heap.size() >= 2) {
        min_s = scoville_heap.top();
        scoville_heap.pop();
        
        second_s = scoville_heap.top();
        scoville_heap.pop();
        
        mix_s = min_s + (second_s * 2);
        scoville_heap.push(mix_s);
        answer++;
        if(scoville_heap.top() > K) {
            cant_K = false;
            break;
        }
    }
    
    if(cant_K) answer = -1;
    
    return answer;
}

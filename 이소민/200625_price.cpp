// https://programmers.co.kr/learn/courses/30/lessons/42584

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    answer.resize(prices.size(), -1);
    int cnt = 0;
    int i, j;

    prices.push_back(0);
    int pSize = prices.size();
    
    for(i = 0; i < pSize-1; i++) {
        for(j = i+1; j < pSize && prices[i] <= prices[j]; j++) { }
        
        if(j == pSize-1) answer[i] = j-i-1;
        else answer[i] = j-i;
    }

    return answer;
}

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    sort(people.begin(), people.end());
    /* 몸무게가 큰 순으로 정렬 */
    
    int heavy = people.size()-1;
    int light = 0;
    
    while(light <= heavy) {
        if(people[light] + people[heavy] <= limit) 
            light++;
    /* 가장 무거운 사람 + 가장 가벼운 사람 <= limit인 경우 짝지어서 보내기 */
        heavy--;
        answer++;
    }
    
    return answer;
}

//https://programmers.co.kr/learn/courses/30/lessons/12915
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector< pair<char, string> > forSort;
    int strSize = strings.size();
    
    answer.resize(strSize);
    forSort.resize(strSize);
    
    for(int i = 0; i < strSize; i++) {
        forSort[i] = make_pair(strings[i][n], strings[i]);
    }
    
    sort(forSort.begin(), forSort.end());
    
    for(int i = 0; i < strSize; i++) {
        answer[i] = forSort[i].second;
    }
    return answer;
}

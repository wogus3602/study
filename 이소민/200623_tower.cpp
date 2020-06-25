#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> heights) {
    vector<int> answer;
    answer.resize(heights.size(), 0);
    int i, j;
    bool flag;

    for(i = heights.size()-1; i >= 0; i--) {
        for(j = i-1; j>= 0 && (heights[j] <= heights[i]); j--) { flag = true; }
        if(j != 0) answer[i] = j+1;
        else if (j == 0 && flag) answer[i] = j+1;
    }

    return answer;
}

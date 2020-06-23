#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer, temp;
    int i, j, k;
    for (vector<vector<int>>::iterator iter = commands.begin(); iter != commands.end(); ++iter) {
        i = (*iter)[0];
        j = (*iter)[1];
        k = (*iter)[2];
        temp.clear();
        temp.assign(array.begin() + i - 1, array.begin() + j);
        sort(temp.begin(), temp.end());
        answer.push_back(*(temp.begin() + k - 1));
    }
    return answer;
}

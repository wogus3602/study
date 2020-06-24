#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(*arr.begin());
    for (auto iter = arr.begin() + 1; iter != arr.end(); ++iter) {
        if (answer.back() != *iter) {
            answer.push_back(*iter);
        }
    }
    return answer;
}

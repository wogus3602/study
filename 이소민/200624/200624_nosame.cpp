#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    int arrSize = arr.size();
    int i, j;
    
    for(i = 0; i < arrSize; i++) {
        for(j = (i+1); arr[i] == arr[j]; j++) ;
        answer.push_back(arr[i]);
        i = j-1;
    }

    return answer;
}

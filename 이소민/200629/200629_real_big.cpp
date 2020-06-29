#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(string a, string b) {
    return a + b < b + a;
}

string solution(vector<int> numbers) {
    string answer = "";
    vector<string> numVec;
    int numSize = numbers.size();
    
    numVec.resize(numSize);
    
    // numbers를 string으로 바꾸고 numVec에 담는다
    for(int i = 0; i < numSize; i++) {
        numVec[i] = to_string(numbers[i]);
    }
    
    // numVec을 정렬한다
    sort(numVec.begin(), numVec.end(), compare);
    
    // 다 더한다
    for(auto it = numVec.end(); it != numVec.begin(); it--) {
        if(*(numVec.end() - 1) == "0") return "0";
        answer += *(it-1);
    }
    
    return answer;
}

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string map(int n, int m1, int m2) {
    string line = "";
    int m = m1 | m2;
    for (int i = n - 1; i >= 0; --i) {
        if (m % 2) {
            line += "#";
        }
        else {
            line += " ";
        }
        m /= 2;
    }
    reverse(line.begin(), line.end());
    return line;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    for (int i = 0; i < n; ++i) {
        answer.push_back(map(n, arr1[i], arr2[i]));
    }
    return answer;
}

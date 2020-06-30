#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
    return a + b > b + a;
}

string solution(vector<int> numbers)
{
    string answer = "";
    vector<string> num;
    int maxN = 0;

    for (auto x : numbers)
        num.push_back(to_string(x));

    sort(num.begin(), num.end(), compare);

    for (auto x : num)
        answer += x;

    if (answer[0] == '0')
        return "0";

    return answer;
}
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int globalN;

bool compare(string a, string b)
{
    if (a[globalN] == b[globalN])
    {
        return a < b;
    }
    return a[globalN] < b[globalN];
}

vector<string> solution(vector<string> strings, int n)
{
    vector<string> answer;
    globalN = n;
    sort(strings.begin(), strings.end(), compare);
    answer = strings;
    return answer;
}
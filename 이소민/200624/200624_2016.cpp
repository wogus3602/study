#include <string>
#include <vector>
#include <utility>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> month{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> day{"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};
    int nday = 0;
    
    for(int i = 1; i < a; i++)
        nday += month[i-1];

    nday += b;
    
    answer += day[(nday-1)%7];
    
    return answer;
}

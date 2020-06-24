#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    int days = 4;
    int month[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string names[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    for (int i = 0; i < a - 1; ++i) {
        days += month[i];
    }
    days += b;
    answer = names[days % 7];
    return answer;
}

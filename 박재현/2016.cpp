#include <string>
#include <vector>

using namespace std;

string solution(int a, int b)
{
    string answer = "";
    int day = 0;
    //                  1  2  3  4  5  6
    int monthDay[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string week[7] = {"FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU"};

    for (int i = 0; i < a - 1; i++)
    {
        day += monthDay[i];
    }

    day += b;

    answer = week[(day - 1) % 7];
    return answer;
}
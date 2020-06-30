#include <string>
#include <vector>

using namespace std;

string solution(string number, int k)
{
    string answer = "";
    int size = number.size() - k;
    int endIndex = size;
    int index = 0;

    for (int i = 0; i < size; i++)
    {
        int startIndex;
        char maxN = '0';

        for (int j = index; j < number.size() - endIndex + 1; j++)
        { // 4 - 1 = 3
            if (maxN < number[j])
            {
                maxN = number[j];
                startIndex = j;
            }
        }
        index = startIndex + 1;
        endIndex--;
        answer += maxN;
    }

    return answer;
}
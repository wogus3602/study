#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int globalN = 0;
string convert(int num) // 10진수 -> 2진수 -> '#' 으로 변환 후 return
{
    string row = "";
    while (num > 0)
    {
        if (num % 2 == 1)
        {
            row += "#";
        }
        else
        {
            row += " ";
        }

        num /= 2;
    }
    while (row.size() != globalN)
    {
        row += " ";
    }
    reverse(row.begin(), row.end());
    return row;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2)
{
    vector<string> answer;
    vector<int> cal;

    // 0 ~ size 만큼 or
    for (int i = 0; i < arr1.size(); i++)
    {
        cal.push_back(arr1[i] | arr2[i]);
    }

    globalN = n;
    for (auto x : cal)
    {
        answer.push_back(convert(x));
    }

    return answer;
}

int main()
{
    solution(6, {46, 33, 33, 22, 31, 50}, {27, 56, 19, 14, 14, 10});
}
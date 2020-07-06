#include <iostream>
#include <string>
using namespace std;

int main()
{
    string oct;

    cin >> oct;

    string answer = "";
    while (oct.size() % 3 != 0)
    {
        oct.insert(oct.begin(), '0');
    }

    for (int i = 0; i < oct.size(); i += 3)
    {
        if (oct.substr(i, 3) == "000")
        {
            answer += "0";
        }
        else if (oct.substr(i, 3) == "001")
        {
            answer += "1";
        }
        else if (oct.substr(i, 3) == "010")
        {
            answer += "2";
        }
        else if (oct.substr(i, 3) == "011")
        {
            answer += "3";
        }
        else if (oct.substr(i, 3) == "100")
        {
            answer += "4";
        }
        else if (oct.substr(i, 3) == "101")
        {
            answer += "5";
        }
        else if (oct.substr(i, 3) == "110")
        {
            answer += "6";
        }
        else if (oct.substr(i, 3) == "111")
        {
            answer += "7";
        }
    }

    cout << answer;
}
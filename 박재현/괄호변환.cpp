#include <string>
#include <vector>
#include <stack>
using namespace std;

bool rightCheck(string s)
{
    stack<char> st;

    for (char c : s)
    {
        if (c == '(')
        {
            st.push(c);
        }
        else if (c == ')')
        {
            if (st.empty())
            {
                return false;
            }
            else
            {
                st.pop();
            }
        }
    }

    if (st.empty())
        return true;
    else
        return false;
}

string vFunction(string w)
{
    if (w.empty())
        return "";

    int cnt1 = 0;
    int cnt2 = 0;
    string u;
    string v;
    for (int i = 0; i < w.length(); i++)
    {
        if (w[i] == '(')
        {
            cnt1++;
        }
        else
        {
            cnt2++;
        }
        u += w[i];
        if (cnt1 == cnt2)
        {
            v += w.substr(i + 1);
            break;
        }
    }
    string answer;
    if (rightCheck(u))
    {
        answer += u + vFunction(v);
    }
    else
    {
        answer += '(';
        answer += vFunction(v);
        answer += ')';

        for (int i = 1; i < u.length() - 1; i++)
        {
            if (u[i] == '(')
                answer += ')';
            else
                answer += '(';
        }
    }

    return answer;
    //(())((   6
}

string solution(string p)
{
    string answer = "";

    answer += vFunction(p);

    return answer;
}
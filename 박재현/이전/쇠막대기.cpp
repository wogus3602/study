#include <stack>
#include <string>
#include <vector>

using namespace std;

int solution(string arrangement)
{
    int answer = 0;
    stack<char> st;
    int check = 0;
    for (auto x : arrangement)
    {

        if (x == '(')
        {
            st.push('(');
            check = 0;
        }
        else
        {
            st.pop();

            if (check)
            {
                answer++;
            }
            else if (st.size() > 1)
            {
                answer += st.size();
                check = 1;
            }
        }
    }

    return answer;
}
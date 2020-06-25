#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> heights)
{
    vector<int> answer;
    stack<int> st;
    bool check = true;
    for (int j = heights.size() - 1; j >= 0; j--)
    {
        for (int i = j - 1; i >= 0; i--)
        {
            if (heights.at(i) > heights.at(j))
            {
                st.push(i + 1);
                check = false;
                break;
            }
        }
        if (check)
            st.push(0);
        check = true;
    }
    while (!st.empty())
    {
        answer.push_back(st.top());
        st.pop();
    }
    return answer;
}
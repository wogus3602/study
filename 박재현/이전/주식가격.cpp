#include <vector>
#include <stack>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> prices)
{
    int size = prices.size();
    vector<int> answer(size);
    stack<int> st;

    for (int i = 0; i < size; i++)
    {
        while (!st.empty() and prices[st.top()] > prices[i])
        {
            answer[st.top()] = i - st.top();
            st.pop();
        }

        st.push(i);
    }
    while (!st.empty())
    {
        answer[st.top()] = size - 1 - st.top();
        st.pop();
    }
    return answer;
}
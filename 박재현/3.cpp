#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> answers)
{
    vector<int> answer;
    vector<int> score(3);

    int first[5] = {1, 2, 3, 4, 5};
    int second[8] = {2, 1, 2, 3, 2, 4, 2, 5};
    int third[10] = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};

    for (int i = 0; i < answers.size(); i++)
    {
        if (first[i % 5] == answers[i])
            score[0]++;
        if (second[i % 8] == answers[i])
            score[1]++;
        if (third[i % 10] == answers[i])
            score[2]++;
    }

    int maxScore = max(max(score[0], score[1]), score[2]);

    for (int i = 0; i < 3; i++)
    {
        if (score[i] == maxScore)
            answer.push_back(i + 1);
    }

    return answer;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    for (auto x : solution({1, 2, 3, 4, 5}))
    {
        cout << x << " ";
    }
}
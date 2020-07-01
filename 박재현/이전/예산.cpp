#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

// 투포인터 알고리즘
int solution(vector<int> d, int budget)
{
    int answer = 0;

    sort(d.begin(), d.end());

    int r = 0; // 기준 오른쪽
    int l = 0; // 기준 왼쪽
    int s = 0; // 합

    while (true)
    {
        if (s >= budget) // 만약 재산보다 크다면 왼쪽 기준을 오른쪽으로 이동 후 합에서 빼준다.
            s -= d[l++];
        else if (r == d.size()) // 오른쪽이 끝에 도달하면 끝
            break;
        else
            s += d[r++];
        if (s <= budget) // 재산이 작은것 중에서
        {
            if (answer < r - l) // 살 수 있는 갯수 max 기록하기
            {
                answer = r - l;
            }
        }
    }

    return answer;
}
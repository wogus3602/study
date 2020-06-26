#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0, min1, min2, tmp_idx, tmp;
    vector<long long> scoville2;
    scoville2.assign(scoville.begin(), scoville.end());
    sort(scoville2.begin(), scoville2.end());
    reverse(scoville2.begin(), scoville2.end());
    while (scoville2.back() < K && scoville2.size() != 1) {
        min1 = scoville2.back();
        scoville2.pop_back();
        min2 = scoville2.back();
        scoville2.pop_back();
        scoville2.push_back(min1 + (2 * min2));
        tmp_idx = (scoville2.size() - 1);
        while (scoville2[tmp_idx] > scoville2[(tmp_idx - 1) / 2]) {
            tmp = scoville2[tmp_idx];
            scoville2[tmp_idx] = scoville2[(tmp_idx - 1) / 2];
            scoville2[(tmp_idx - 1) / 2] = tmp;
            tmp_idx = (tmp_idx - 1) / 2;
        }
        for (auto iter = scoville2.begin(); iter != scoville2.end(); ++iter){
            cout << *iter << " ";
        }
        cout << endl;
        ++answer;
    }
    if (scoville2.size() == 1 && (*(scoville2.begin()) < K)) {
        return -1;
    }
    return answer;
}

#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int score;
  vector<int> w_score, k_score;

  for (int i = 0; i < 10; ++i) {
    cin >> score;
    w_score.push_back(score);
  }

  for (int i = 0; i < 10; ++i) {
    cin >> score;
    k_score.push_back(score);
  }

  sort(w_score.begin(), w_score.end(), greater<int>());
  sort(k_score.begin(), k_score.end(), greater<int>());

  cout << (w_score[0] + w_score[1] + w_score[2]) << endl;
  cout << (k_score[0] + k_score[1] + k_score[2]) << endl;

  return 0;
}

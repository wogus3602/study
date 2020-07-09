#include <iostream>
#include <vector>

using namespace std;

int main() {
  bool equal_flag;
  int n, write1, write2, write3, player_score;

  cin >> n;

  vector<vector<int>> games(n, vector<int>(3, 0));
  vector<int> scores(n, 0);

  for (int i = 0; i < n; ++i) {
    cin >> write1 >> write2 >> write3;
    games[i][0] = write1;
    games[i][1] = write2;
    games[i][2] = write3;
  }
  
  for (int i = 0; i < n; ++i) {

    player_score = 0;

    for (int j = 0; j < 3; ++j) {

      equal_flag = false;

      for (int k = 0; k < n; ++k) {
        if (k == i) {
          continue;
        }
        if (games[i][j] == games[k][j]) {
          equal_flag = true;
          break;
        }
      }
      if (!equal_flag) {
        player_score += games[i][j];
      }
    }

    scores[i] = player_score;
  }

  for (auto iter = scores.begin(); iter != scores.end(); ++iter) {
    cout << *iter << endl;
  }

  return 0;
}

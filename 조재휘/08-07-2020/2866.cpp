#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  bool exit_flag = false;
  int row, col, count = 0;;
  string input;
  vector<string> table;

  cin >> row >> col;

  for (int i = 0; i < col; ++i) {
    table.push_back("");
  }

  for (int i = 0; i < row; ++i) {
    cin >> input;
    for (int j = 0; j < col; ++j) {
      table[j].push_back(input[j]);
    }
  }

  for (int i = 0; i < row; ++i) {
    for (int j = 0; j < col - 1; ++j) {
      for (int k = j + 1; k < col; ++k) {
        cout << table[j].substr(i, row - i) << " " << table[k].substr(i, row - i) << endl;
        if (table[j].substr(i, row - i) == table[k].substr(i, row - i)) {
          exit_flag = true;
          break;
        }
      }
      if (exit_flag) {
        break;
      }
    }
    if (exit_flag) {
      break;
    }
    ++count;
  }

  cout << count - 1 << endl;

  return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
  int JOI_num = 0, IOI_num = 0;
  string s;

  cin >> s;

  for (int i = 0; i < s.size() - 2; ++i) {
    if ((s[i] == 'J' || s[i] == 'I') && (s[i + 1] == 'O') && (s[i + 2] == 'I')) {
      if (s[i] == 'J') ++JOI_num;
      else ++IOI_num;
      ++i;
    }
  }

  cout << JOI_num << "\n" << IOI_num << endl;

  return 0;
}

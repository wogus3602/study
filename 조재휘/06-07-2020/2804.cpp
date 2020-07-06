#include <iostream>
#include <string>

using namespace std;

int main() {
  int s1_pos, s2_pos;
  string s1, s2;

  cin >> s1 >> s2;

  for (s1_pos = 0; s1_pos < s1.size(); ++s1_pos) {
    for (s2_pos = 0; s2_pos < s2.size(); ++s2_pos) {
      if (s1[s1_pos] == s2[s2_pos]) break;
    }
    if (s1[s1_pos] == s2[s2_pos]) break;
  }
  
  for (int i = 0; i < s2.size(); ++i) {
    for (int j = 0; j < s1.size(); ++j) {
      if (i == s2_pos) {
        cout << s1[j];
      }
      else if (j == s1_pos) {
        cout << s2[i];
      }
      else {
        cout << '.';
      }
    }
    cout << endl;
  }
  
  return 0;
}

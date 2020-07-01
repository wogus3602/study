#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<string> string_list;
  string s;
  int max_size = 0;

  for (int i = 0; i < 5; ++i) {
    cin >> s;
    string_list.push_back(s);
  }

  for (auto iter = string_list.begin(); iter != string_list.end(); ++iter) {
    if (max_size < (*iter).size()) {
      max_size = (*iter).size();
    }
  }

  s.clear();
  for (int i = 0; i < max_size; ++i) {
    for (auto iter = string_list.begin(); iter != string_list.end(); ++iter) {
      if (i < (*iter).size()) s += (*iter)[i];
    }
  }

  cout << s << endl;

  return 0;
}

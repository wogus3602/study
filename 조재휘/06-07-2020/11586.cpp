#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  int n, k;
  vector<string> mirror;
  string mirror_line;

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> mirror_line;
    mirror.push_back(mirror_line);
  }
  cin >> k;

  if (k == 1) {
    for (auto iter = mirror.begin(); iter != mirror.end(); ++iter) {
      cout << *iter << endl;
    }
  }
  else if (k == 2) {
    for (auto iter = mirror.begin(); iter != mirror.end(); ++iter) {
      reverse((*iter).begin(), (*iter).end());
      cout << *iter << endl;
    }
  }
  else {
    reverse(mirror.begin(), mirror.end());
    for (auto iter = mirror.begin(); iter != mirror.end(); ++iter) {
      cout << *iter << endl;
    }
  }

  return 0;
}
    

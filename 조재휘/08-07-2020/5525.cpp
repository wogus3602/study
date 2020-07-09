#include <iostream>
#include <string>

using namespace std;

int main()
{
  int answer = 0, n, m, IOI_count = 0;
  int *IOI_index;
  string s, p = "I";

  cin >> n >> m >> s;

  for (int i = 0; i < n; ++i) {
    p += "OI";
  }

  IOI_index = new int[((m - p.size()) / 2) + 1];

  for (int i = 0; i < m - 2; ++i) {
    if (s.substr(i, 3) == "IOI") {
      IOI_index[IOI_count++] = i;
      ++i;
    }
  }

  for (int i = 0; i < IOI_count; ++i) {
    if ((IOI_index[i] <= (m - p.size()))&& (s.substr(IOI_index[i], (2 * n) + 1) == p)) {
      ++answer;
    }
  }

  delete[] IOI_index;

  cout << answer << endl;

  return 0;
}

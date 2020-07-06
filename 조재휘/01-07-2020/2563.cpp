#include <iostream>

using namespace std;

void glue(int x, int y, bool (&black)[100][100]) {
  for (int i = 0; i < 10; ++i) {
    for (int j = 0; j < 10; ++j) {
      black[x + i][y + j] = true;
    }
  }
}

int main() {
  int n, x, y, area = 0;
  bool black[100][100] = { 0, };

  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> x >> y;
    glue(x, y, black);
  }

  for (int i = 0; i < 100; ++i) {
    for (int j = 0; j < 100; ++j) {
      if (black[i][j]) {
        ++area;
      }
    }
  }

  cout << area << endl;

  return 0;
}

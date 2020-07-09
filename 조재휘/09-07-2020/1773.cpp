#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n, c, cycle, T, answer = 0;

  cin >> n >> c;

  bool *firework = new bool[c + 1];
  for (int i = 0; i < c + 1; ++i) {
    firework[i] = false;
  }

  for (int i = 0; i < n; ++i) {
    cin >> cycle;
    T = cycle;
    while (T <= c) {
      firework[T] = true;
      T += cycle;
    }
  }

  for (int i = 0; i < c + 1; ++i) {
    if (firework[i]) {
      ++answer;
    }
  }
  
  cout << answer << endl;
  
  delete[] firework;
  
  return 0;
}

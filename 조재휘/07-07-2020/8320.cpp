#include <iostream>

using namespace std;

int how_many_rect(int n) {
  int answer = 0;
  for (int i = 1; i < n + 1; ++i) {
    for (int j = 1; j * j <= i; ++j) {
      if ((i % j) == 0) {
        ++answer;
      }
    }
  }

  return answer;
}

int main() {
  int n;

  cin >> n;

  cout << how_many_rect(n) << endl;

  return 0;
}

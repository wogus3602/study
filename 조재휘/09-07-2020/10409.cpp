#include <iostream>

using namespace std;

int main() {
  int n, t, extime, sum = 0;

  cin >> n >> t;

  for (int i = 0; i < n; ++i) {
    cin >> extime;
    sum += extime;
    if (sum > t) {
      cout << i << endl;
      break;
    }
  }
  if (sum <= t) {
    cout << n << endl;
  }

  return 0;
}

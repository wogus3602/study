#include <iostream>

using namespace std;

int main() {
  bool neg = false;
  int n;

  cin >> n;

  if (n == 0) {
    cout << 0 << "\n" << 0 << endl;
    return 0;
  }
  else if (n < 0) {
    neg = true;
    n *= -1;
  }

  int *fib = new int[n + 1];

  fib[0] = 0;
  fib[1] = 1;

  for (int i = 2; i < n + 1; ++i) {
    fib[i] = (fib[i - 1] % 1000000000) + (fib[i - 2] % 1000000000);
  }
  if (!(n % 2) && neg) {
    cout << "-1" << endl;
  }
  else cout << "1" << endl;
  cout << (fib[n] % 1000000000) << endl;

  return 0;
}

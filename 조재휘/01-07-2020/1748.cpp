#include <iostream>

using namespace std;

int digit(int n) {
  int digit = 0;

  while (n) {
    ++digit;
    n /= 10;
  }

  return digit;
}

int pow(int n) {
  int pow = 1;

  for (int i = 0; i < n; ++i) {
    pow *= 10;
  }

  return pow;
}

int continue_number(int n) {
  int n_digit = digit(n), answer = 0;

  answer += (n_digit * (n - pow(n_digit - 1) + 1));
  for (int i = --n_digit; i > 0; --i) {
    answer += ((pow(i) - pow(i - 1)) * i);
  }

  return answer;
}

int main() {
  int n;

  cin >> n;
  cout << continue_number(n) << endl;

  return 0;
}

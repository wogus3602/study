#include <iostream>
#include <vector>

using namespace std;

int main() {
  int student;
  bool submission[31] = {0, };

  for (int i = 0; i < 28; ++i) {
    cin >> student;
    submission[student] = true;
  }

  for (int i = 1; i <= 30; ++i) {
    if (!submission[i]) {
      cout << i << endl;
    }
  }

  return 0;
}

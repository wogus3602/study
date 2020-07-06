#include <iostream>

using namespace std;

int soda(int bottle, int change) {
  if (bottle < change) {
    return 0;
  }
  return (bottle / change) + soda((bottle / change) + bottle % change, change);
}

int main() {
  int e, f, c;

  cin >> e >> f >> c;
  cout << soda(e + f, c) << endl;

  return 0;
}

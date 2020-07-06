#include <iostream>
#include <string>

using namespace std;

int distance(char alp1, char alp2) {
  if (alp1 <= alp2) {
    return (int)(alp2 - alp1);
  }
  else return (int)(alp2 - alp1) + 26;
}

int main() {
  int n;
  string s1, s2;
  
  cin >> n;
  for (int i = 0; i < n; ++i) {
    cin >> s1 >> s2;
    cout << "Distances: ";
    for (int j = 0; j < s1.size() - 1; ++j) {
      cout << distance(s1[j], s2[j]) << " ";
    }
    cout << distance(s1[s1.size() - 1], s2[s2.size() - 1]) << endl;
  }

  return 0;
}

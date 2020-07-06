#include <iostream>
#include <cstring>

using namespace std;

int main() {
  int n, m, a, b, invite = 0;

  cin >> n >> m;

  int** friends = new int*[n + 1];
  for (int i = 0; i < n + 1; ++i) {
    friends[i] = new int[n + 1];
    memset(friends[i], 0, sizeof(int) * (n + 1));
  } // friends 그래프 인접행렬 동적 할당

  int** double_friends = new int*[n + 1];
  for (int i = 0; i < n + 1; ++i) {
    double_friends[i] = new int[n + 1];
    memset(double_friends[i], 0, sizeof(int) * (n + 1));
  } // friends 제곱을 위한 인접행렬 동적 할당

  for (int i = 0; i < m; ++i) {
    cin >> a >> b;
    friends[a][b] = 1;
    friends[b][a] = 1;
  } // friends 그래프 입력

  for (int i = 0; i < n + 1; ++i) {
    for (int j = 0; j < n + 1; ++j) {
      for (int k = 0; k < n + 1; ++k) {
        double_friends[i][j] += friends[i][k] * friends[k][j];
      }
    }
  } // friends 인접행렬 제곱

  for (int i = 2; i < n + 1; ++i) {
    if (friends[1][i] || double_friends[1][i]) {
      ++invite;
    }
  }

  cout << invite << endl;

  for (int i = 0; i < n + 1; ++i) {
    delete [] friends[i];
  }
  delete [] friends; // friends 그래프 인접행렬 동적 할당 해제

  for (int i = 0; i < n + 1; ++i) {
    delete [] double_friends[i];
  }
  delete [] double_friends; // friends 제곱을 위한 인접행렬 동적 할당 해제
  
  return 0;
}

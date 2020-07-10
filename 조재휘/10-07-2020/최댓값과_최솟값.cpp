#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string s) {
  string answer = "";
  char* cs = new char[s.size() + 1];
  copy(s.begin(), s.end(), cs);
  cs[s.size()] = '\0';

  vector<int> numbers;

  char *ptr = strtok(cs, " ");
  while (ptr != NULL) {
    numbers.push_back(atoi(ptr));
    ptr = strtok(NULL, " ");
  }

  sort(numbers.begin(), numbers.end());

  answer += (to_string(numbers[0]) + " " + to_string(numbers[numbers.size() - 1]));

  delete[] cs;
  return answer;
}

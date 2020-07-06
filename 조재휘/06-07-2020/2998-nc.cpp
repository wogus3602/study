#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int main() {
  map<string, string> bin_to_oct;
  string bin, oct;

  bin_to_oct.insert(make_pair("000", "0"));
  bin_to_oct.insert(make_pair("001", "1"));
  bin_to_oct.insert(make_pair("010", "2"));
  bin_to_oct.insert(make_pair("011", "3"));
  bin_to_oct.insert(make_pair("100", "4"));
  bin_to_oct.insert(make_pair("101", "5"));
  bin_to_oct.insert(make_pair("110", "6"));
  bin_to_oct.insert(make_pair("111", "7"));

  cin >> bin;

  bin.insert(0, (102 - bin.size()) % 3, '0');

  cout << (102 - bin.size()) % 3 << endl;

  for (int i = 0; i < (bin.size() / 3); ++i) {
    oct += bin_to_oct.find(bin.substr(i * 3, 3))->second;
  }

  cout << oct << endl;

  return 0;
}

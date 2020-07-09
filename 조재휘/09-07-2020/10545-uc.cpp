#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main()
{
  char prev = '0';
  int num, hash;
  string message, answer;
  vector<int> keypad;
  map<char, int> original_keypad = {{'a', 21}, {'b', 22}, {'c', 23},
                                    {'d', 31}, {'e', 32}, {'f', 33},
                                    {'g', 41}, {'h', 42}, {'i', 43},
                                    {'j', 51}, {'k', 52}, {'l', 53},
                                    {'m', 61}, {'n', 62}, {'o', 63},
                                    {'p', 71}, {'q', 72}, {'r', 73}, {'s', 74},
                                    {'t', 81}, {'u', 82}, {'v', 83},
                                    {'w', 91}, {'x', 92}, {'y', 93}, {'z', 94}};

  for (int i = 0; i < 9; ++i) {
    cin >> num;
    keypad.push_back(num);
  }
  cin >> message;

  for (int i = 0; i < message.size(); ++i) {
    if(prev == message[i]) {
      answer += "#";
    }
    hash = original_keypad.find(message[i])->second;
    cout << keypad[hash / 10] << endl;
    cout << char(keypad[hash / 10] + '0') << endl;
    answer.insert(answer.size() - 1, hash % 10, char(keypad[hash / 10] + '0'));
    prev = message[i];
  }

  cout << answer << endl;

  return 0;
}

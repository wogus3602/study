#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <vector>

using namespace std;

string LCD_line(int s, string n, const map<char, string> decoder, int pos, int length);

int main() {
  int s;
  string n;
  map<char, string> decoder;
  vector<string> LCD_output;
  
  decoder.insert(make_pair('0', "1110111"));
  decoder.insert(make_pair('1', "0010010"));
  decoder.insert(make_pair('2', "1011101"));
  decoder.insert(make_pair('3', "1011011"));
  decoder.insert(make_pair('4', "0111010"));
  decoder.insert(make_pair('5', "1101011"));
  decoder.insert(make_pair('6', "1101111"));
  decoder.insert(make_pair('7', "1010010"));
  decoder.insert(make_pair('8', "1111111"));
  decoder.insert(make_pair('9', "1111011"));

  cin >> s >> n;

  LCD_output.push_back(LCD_line(s, n, decoder, 0, 1));
  for (int i = 0; i < s; ++i) {
    LCD_output.push_back(LCD_line(s, n, decoder, 1, 2));
  }
  LCD_output.push_back(LCD_line(s, n, decoder, 3, 1));
  for (int i = 0; i < s; ++i) {
    LCD_output.push_back(LCD_line(s, n, decoder, 4, 2));
  }
  LCD_output.push_back(LCD_line(s, n, decoder, 6, 1));
  
  for (auto iter = LCD_output.begin(); iter != LCD_output.end(); ++iter) {
      cout << *iter << endl;
  }

  return 0;
}

string LCD_line(int s, string n, const map<char, string> decoder, int pos, int length) {

  string LCD_line, segment_flag;

  if (length == 1) {
    for (int i = 0; i < n.size(); ++i) {

      segment_flag = decoder.find(n[i]) -> second.substr(pos, length);

      if (segment_flag == "0") {
        LCD_line.append(s + 2, ' ');
      }
      else {
        LCD_line += " ";
        LCD_line.append(s, '-');
        LCD_line += " ";
      }
      LCD_line += " ";
    }
  }
  else {
    for (int i = 0; i < n.size(); ++i) {

      segment_flag = decoder.find(n[i])->second.substr(pos, length);

      if (segment_flag == "00") {
        LCD_line.append(s + 2, ' ');
      }
      else if (segment_flag == "01") {
        LCD_line.append(s + 1, ' ');
        LCD_line += "|";
      }
      else if (segment_flag == "10") {
        LCD_line += "|";
        LCD_line.append(s + 1, ' ');
      }
      else {
        LCD_line += "|";
        LCD_line.append(s, ' ');
        LCD_line += "|";
      }
      LCD_line += " ";
    }
  }

  return LCD_line;
}

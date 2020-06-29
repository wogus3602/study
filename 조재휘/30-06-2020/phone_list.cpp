#include <string>
#include <iostream>
#include <vector>
#include <cmath>
#include <cstdlib>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    int diff = 0;
    for (int i = 0; i < (phone_book.size() - 1); i++) {
        for (int j = i + 1; j < phone_book.size(); j++) {
            if (phone_book[i].size() > phone_book[j].size()) {
                diff = phone_book[i].size() - phone_book[j].size();
                if (atoi(phone_book[i].c_str()) / int(pow (10, diff)) == atoi(phone_book[j].c_str())) {
                    answer = false;
                }
            }
            else {
                diff = phone_book[j].size() - phone_book[i].size();
                if (atoi(phone_book[j].c_str()) / int(pow (10, diff)) == atoi(phone_book[i].c_str())) {
                    answer = false;
                }
            }
        }
    }
    return answer;
}

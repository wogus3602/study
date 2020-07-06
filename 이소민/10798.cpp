#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	vector<string> input;
	string::iterator it[5];
	int maxSize = 0;

	input.resize(5);

	for (int i = 0; i < 5; i++) {
		cin >> input[i];
		it[i] = input[i].begin();
		if (input[i].size() > maxSize) maxSize = input[i].size();
	}

	for (int i = 0; i < maxSize; i++) {
		for (int i = 0; i < 5; i++) {
			if (it[i] == input[i].end()) continue;
			cout << *it[i];
			it[i]++;
		}
	}

	return 0;
}

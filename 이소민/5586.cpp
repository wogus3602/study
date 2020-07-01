#include <iostream>
#include <string>
using namespace std;

int main() {
	int IOI = 0;
	int JOI = 0;
	string input;
	string sub;
	int inputSize;

	cin >> input;
	inputSize = input.size();

	for (int i = 0; i < inputSize; i++) {
		sub = input.substr(i, 3);
		if (sub == "JOI") JOI++;
		else if (sub == "IOI") IOI++;
	}

	cout << JOI << endl;
	cout << IOI << endl;

	return 0;
}

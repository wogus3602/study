#include <iostream>

using namespace std;

int main() {
	int input;
	int result = 0;
	int temp = 10;
	int i = 1;

	cin >> input;

	for (; input >= temp; i++) {
		result += (temp * 0.9) * i;
		temp *= 10;
	}
	result += ((input - (temp / 10)) + 1) * i;

	cout << result;
}

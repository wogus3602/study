#include <iostream>
using namespace std;

int GCD(int a, int b);

int main() {
	int sosage, people;
	// N, M

	cin >> sosage;
	cin >> people;
	// 인당 소세지 sosage/people개

	cout << people - GCD(sosage, people) << "\n";
	return 0;
}

int GCD(int a, int b) {
	if (a % b == 0)
		return b;
	else GCD(b, a % b);
}
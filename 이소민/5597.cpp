#include <iostream>
#include <vector>

using namespace std;

int main() {
	int student;
	vector<bool> attend(30, false);

	for (int i = 0; i < 28; i++) {
		cin >> student;
		attend[student-1] = true;
	}

	for (int i = 0; i < 30; i++) {
		if (!attend[i]) cout << i+1 << endl;
	}

	return 0;
}

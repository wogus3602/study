#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
	string binary, octal = "";
	string binary_substr;
	int binary_size;
	int plus;

	cin >> binary;

	while(binary.size() % 3 != 0) {
		binary = "0" + binary;
	}

	binary_size = binary.size();
	
	for(int i = 0; i < binary_size; i += 3) {
		binary_substr = binary.substr(i, 3);
		plus = (binary_substr[0] - 48) * 4
			+ (binary_substr[1] - 48) * 2
			+ (binary_substr[2] - 48);
		octal += plus + 48;
	}

	cout << octal << "\n";

	return 0;
}


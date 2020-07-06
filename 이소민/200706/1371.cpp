#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	int alphabet[26] = {0, };
	string input;
	int max = 0;

	while(cin >> input) {
		for(int i = 0; i < input.size(); i++) {
			alphabet[input[i]]++;
		}
	}

	for(int i = 0; i < 26; i++) 
		if(max < alphabet[i]) max = alphabet[i];

	for(int i = 0; i < 26; i++) 
		if(max == alphabet[i]) cout << char(i+65);

	return 0;
}

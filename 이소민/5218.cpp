#include <iostream>
#include <string>

using namespace std;

int main() {
	int test;
	string word1;
	string word2;
	int word_size;

	cin >> test;

	for (int i = 0; i < test; i++) {
		cin >> word1;
		cin >> word2;

		word_size = word1.size();

		cout << "Distances: ";

		for (int j = 0; j < word_size; j++) {
			if (word1[j] <= word2[j]) cout << word2[j] - word1[j] << " ";
			else cout << (word2[j] + 26) - word1[j] << " ";
		}
        
        cout << endl;
	}

	return 0;
}

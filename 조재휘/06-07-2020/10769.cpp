#include<iostream>
#include<string>

using namespace std;

int main() {
	int happy = 0, sad = 0;
	string text;
	
  getline(cin, text);
	
	for (int i = 0; i < text.size() - 2; ++i) {
		if (text.substr(i, 3) == ":-)") {
			++happy;
			continue;
		}
		if (text.substr(i, 3) == ":-(") {
      ++sad;
		}
	}

	if (!(happy || sad)) {
    cout << "none" << endl;
	}
	else if (happy > sad) {
    cout << "happy" << endl;
	}
	else if (happy < sad) {
    cout << "sad" << endl;
	}
	else {
    cout << "unsure" << endl;
	}

	return 0;
}

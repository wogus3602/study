#include <iostream>
#include <string>

using namespace std;

int main(int argc, char** argv) {
	string message, temp;
	int msg_size;
	int happy = 0, sad = 0;

	getline(cin, message);
	msg_size = message.size();

	cout << message;
	for(int i = 0; i < msg_size - 3; i++) {
		temp = message.substr(i, 3);

		if(temp == ":-)") happy++;
		else if(temp == ":-(") sad++;
	}

	if(sad == 0 and happy == 0) cout << "none";
	else if(sad == happy) cout << "unsure";
	else if(sad < happy) cout << "happy";
	else if(sad > happy) cout << "sad";
	
	cout << "\n";

	return 0;
}

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

#define ORIGIN		1
#define LEFTRIGHT	2
#define UPDOWN		3

void mirror(vector<string> princess, int mirr_status);
void rev_princess(vector<string> *princess);

int main(int argc, char** argv) {
	int mirr_size, mirr_status;
	string temp;
	vector<string> princess;
	
	cin >> mirr_size;
	princess.resize(mirr_size);

	for(int i = 0; i < mirr_size; i++) {
		cin >> temp;
		princess[i] = temp;
	}

	cin >> mirr_status;
	mirror(princess, mirr_status);
	
	return 0;
}

void mirror(vector<string> princess, int mirr_status) {
	vector<string>::iterator it_begin;
	vector<string>::iterator it_end;
	int operand;

	switch(mirr_status) {
	case ORIGIN:
		it_begin = princess.begin();
		it_end = princess.end();
		operand = 1;
		break;

	case LEFTRIGHT:
		it_begin = princess.begin();
		it_end = princess.end();
		operand = 1;
		rev_princess(&princess);
		break;

	case UPDOWN:
		it_begin = --princess.end();
		it_end = princess.begin();
		operand = -1;
		break;

	default:
		break;
	}

	for(; it_begin != it_end; it_begin += operand) {
		cout << *it_begin << "\n";
	}

	if(mirr_status == 3) cout << *it_begin << "\n";
}

void rev_princess(vector<string> *princess) {
	int princess_size = (*princess).size();
	
	for(int i = 0; i < princess_size; i++)
		reverse((*princess)[i].begin(), (*princess)[i].end());
}

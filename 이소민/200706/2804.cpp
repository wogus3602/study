#include <iostream>
#include <string>
#include <vector>
#include <utility>

using namespace std;

pair<int, int> find_same(string garo, string sero);
void print(vector< vector<char> > output);

int main(int argc, char** argv) {
	string garo, sero;
	vector< vector<char> > output;
	int garo_len, sero_len;
	pair<int, int> share_point;

	cin >> garo;
	cin >> sero;

	garo_len = garo.size();
	sero_len = sero.size();

	output.resize(sero_len);
	for(int i = 0; i < sero_len; i++) {
		output[i].resize(garo_len, '.');
	}

	share_point = find_same(garo, sero);

	for(int i = 0; i < garo_len; i++) {
		output[share_point.first][i] = garo[i];
	}

	for(int i = 0; i < sero_len; i++) {
		output[i][share_point.second] = sero[i];
	}

	print(output);
	return 0;
}

pair<int, int> find_same(string garo, string sero) {
	int garo_len, sero_len;

	garo_len = garo.size();
	sero_len = sero.size();

	for(int i = 0; i < garo_len; i++) {
		for(int j = 0; j < sero_len; j++) {
			if(garo[i] == sero[j])
				return make_pair(j, i);
		}
	}
}

void print(vector< vector<char> > output) {
	int output_size = output.size();

	for(int i = 0; i < output_size; i++) {
		for(auto it = output[i].begin(); it != output[i].end(); it++)
			cout << *it;
		cout << "\n";
	}
}

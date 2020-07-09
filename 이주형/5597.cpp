#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool check(string info[6], char arr[][3]) {
	bool chk[6] = { 0 };
	vector<string> compare;
	for (int j = 0; j < 3; j++) {
		string cmp = "";
		for (int k = 0; k < 3; k++) {
			cmp += arr[j][k];
		}
		compare.push_back(cmp);

	}
	//가로단어 비교

	for (int j = 0; j < 3; j++) {
		string cmp = "";
		for (int k = 0; k < 3; k++) {
			cmp += arr[k][j];
		}
		compare.push_back(cmp);
	}
	sort(compare.begin(), compare.end());
	for (int i = 0; i < 6; i++) {
		if (compare[i] != info[i]) {
			return false;
		}
	}
	return true;
}

int main() {

	char arr[3][3];
	string info[6];
	for (int i = 0; i < 6; i++) {
		cin >> info[i];
	}

	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < 6; j++) {
			for (int k = 0; k < 6; k++) {
				if (i != k && i != j && j != k) {
					arr[0][0] = info[i][0];
					arr[0][1] = info[i][1];
					arr[0][2] = info[i][2];

					arr[1][0] = info[j][0];
					arr[1][1] = info[j][1];
					arr[1][2] = info[j][2];

					arr[2][0] = info[k][0];
					arr[2][1] = info[k][1];
					arr[2][2] = info[k][2];

					if (check(info, arr)) {
						for (int n = 0; n < 3; n++) {
							for (int m = 0; m < 3; m++) {
								cout << arr[n][m];
							}
							cout << '\n';
						}
						return 0;
					}
					//cout << '\n';
				}
			}
		}
	}
	cout << '0';
}
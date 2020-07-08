#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main() {
	int R, C;
	int count = 0;
	string temp;
	vector<string> str_vec;
	map<string, int> str_map;
	int vec_size;
	int begin;

	cin >> R;
	cin >> C;

	str_vec.resize(R);
	for (int i = 0; i < R; i++) {
		cin >> str_vec[i];
	}

	begin = 0;
	while (begin != R) {
		
		for (int i = 0; i < C; i++) {
			temp = "";

			for (int j = begin; j < R; j++) {
				temp += str_vec[j][i];
			}

			str_map.insert(make_pair(temp, 0));
			temp.clear();
		}
		
		if (str_map.size() != C) break;
		begin++;
		count++;
		str_map.clear();
	}

	cout << count-1 << "\n";
	
	return 0;
}
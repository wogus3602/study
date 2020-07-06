#include <iostream>
#include <vector>
#include <utility>
using namespace std;

int paper_size(vector< vector<bool> > paper);

int main() {
	vector< vector<bool> > paper;
	int num;
	int x, y;

	paper.resize(100);
	for (int i = 0; i < 100; i++) 
		paper[i].resize(100);

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> x >> y;
		for (int j = x; j < x + 10; j++) 
			for (int k = y; k < y + 10; k++)
				paper[k][j] = true;
	}

	cout << paper_size(paper);

	return 0;
}

int paper_size(vector< vector<bool> > paper) {
	int result = 0;

	for (int i = 0; i < paper.size(); i++) 
		for (int j = 0; j < paper[i].size(); j++)
			if (paper[j][i]) result++;
	
	return result;
}

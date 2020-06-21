#include <string>
#include <vector>
using namespace std;

vector<int> solution(vector<int> answers) {
	vector<int> answer;
	// 가장 많은 문제를 맞춘 사람들

	vector<int> result(3, 0);
	// 1,2,3번이 각각 몇개씩 맞췄는지

	vector< vector<int> > way(3);
	way[0] = {1,2,3,4,5};
	way[1] = {2,1,2,3,2,4,2,5};
	way[2] = {3,3,1,1,2,2,4,4,5,5};
	
	int aSize = answers.size();
	int wSize;
	for(int i = 0; i < 3; i++) {
		wSize = way[i].size();
		for(int j = 0; j < aSize; j++) {
			if(answers[j] == way[i][j%wSize]) result[i]++;
			// 만약 맞았다면 맞은개수++
		}
	}

	int max = *max_element(result.begin(), result.end());
	for(int i = 0; i < 3; i++) {
		if(result[i] == max) answer.push_back(i+1);
	}

	return answer;
}

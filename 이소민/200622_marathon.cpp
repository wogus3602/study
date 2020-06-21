#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	sort(participant.begin(), participant.end());
	sort(completion.begin(), completion.end());
	// 다 정렬하기
	
	for(int i = 0; i < completion.size(); i++) {
		if(participant[i].compare(completion[i]))
			return participant[i];
	}
	
	return participant[participant.size()-1];
}

int main(int argc, char** argv) {
	vector<string> participant, completion;
	solution(participant, completion);
}

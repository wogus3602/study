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
	// 다른게 보이면 완주하지 못한 참여자임	

	return participant[participant.size()-1];
	// 마지막 참여자가 완주 못한 선수인 경우
}

int main(int argc, char** argv) {
	vector<string> participant, completion;
	solution(participant, completion);
}

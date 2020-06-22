#include <string>
#include <vector>

using namespace std;

bool compare(vector<int> baseball, vector<int> guess ) {
	int strike = 0;
	int ball = 0;

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			if(i == j && guess[i] == baseball[j]) strike++;
			else if(i != j && guess[i] == baseball[j]) ball++;
		}
	}

	if(strike == baseball[3] && ball == baseball[4]) return true;
	else return false;
	// 만약 스트라이크, 볼 수가 모두 같다면 true를, 아니라면 false를 리턴한다
}

vector<int> split(vector<int> baseball) {
// 벡터 쪼개
	vector<int> newvec;
	newvec.resize(5);
	
	newvec[0] = baseball[0] / 100;
	newvec[1] = baseball[0] / 10 % 10;
	newvec[2] = baseball[0] % 10;
	newvec[3] = baseball[1];
	newvec[4] = baseball[2];

	return newvec;
}

int solution(vector< vector<int> > baseball) {
	int answer = 0;
	vector<int> guess(3,0);			// 추측되는 야구공 위치
	bool flag = false;			// 맞았는지 틀렸는지 검사할 때 사용
	int bSize = baseball.size();

	for(int i = 0; i < bSize; i++) {
		baseball[i] = split(baseball[i]);
	}	

	for(int i = 1; i <= 9; i++) {
		guess[0] = i;

		for(int j = 1; j <= 9; j++) {
			if(j == i) continue;
			guess[1] = j;

			for(int k = 1; k <= 9; k++) {
				if(k == i || k == j) continue;
				// 서로 다른 1~9까지 3자리 임의의 숫자이므로 같은 숫자가 있으면 피해야한다
				guess[2] = k;

				for(int x = 0; x < bSize; x++) {
					flag = compare(baseball[x], guess);
					if(!flag) break;	// 한번이라도 false가 나왔다면 생각한 숫자가 될 수 없다
				}

				if(flag) answer++;		// 위의 for문을 빠져나왔는데도 true면 생각한 숫자가 될 수 있다
			}
		}
	}
	
	return answer;
}

int main(int argc, char** argv) {
	vector< vector<int> > baseball = {
		{123,1,1},
		{356,1,0},
		{327,2,0},
		{489,0,1}
	};
}


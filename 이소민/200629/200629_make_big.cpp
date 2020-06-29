#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
	string answer = "";

	/* k개를 제거해서 만드는 숫자 : number크기 - k만큼 고르기 */
	int numberSize = number.size();
	int answerSize = number.size() - k;
	int begin = 0;
	char maxInt = 0;
	int maxIdx;

	for(int i = 0; i < answerSize; i++) {
	/* 넣을 수 만큼 반복하기 */
		maxInt = 0;

		for(int j = begin; j <= k+i; j++) {
	/* 최대값을 구할 수 있는 범위 내에서 최대값 구하기  */	
			if(number[j] > maxInt) {
				maxInt = number[j];
				maxIdx = j;
			}
		}

		answer += maxNum;
		begin = maxIdx + 1;
	}

	/* begin과 end값을 구하는 방법
	   i번째 수를 고를 때에
	   시작점은 이전에 골랐던 거 이후로,
	   끝 점은 적어도 이 이후에도 answerSize - i개를 고를 수 있음을 보장해야 한다
	   그러므로 numberSize - (answerSize - i)인데
	   이걸 정리하면 k+i가 된다 */

	return answer;
}

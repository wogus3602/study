#include <string>
#include <vector>
#include <iostream>

using namespace std;

bool sosu(int n);
void permutate_dfs(string paper, string result);

int answer = 0;
vector<bool> visit(8, 0);
vector<bool> check(10000000, 0);

int solution(string number) {
	/* 숫자를 조합하고 조합한 숫자가 소수인지 확인하기 */
	permutate_dfs(number, "");
	
	return answer;
}

void permutate_dfs(string paper, string result) {
	/* result : 순열로 만든 숫자
	   paper : 순열의 바탕이 될? 종이들 
	   len : 순열로 만들 숫자의 길이
	   depth : 어디까지 왔는지 */
    
	if(result != "" && !check[stoi(result)]) {
        // result가 뭔가 있으며 그 숫자가 중복이 아닐 경우
        int resInt = stoi(result);
		check[resInt] = true;		// 중복 아니면 체크했다고 확인
		if(sosu(resInt)) answer++;	// 소수면 답++
	}

	for(int i = 0; i < paper.length(); i++) {
        if(visit[i]) continue;      // 앞에서 방문했다면 여긴 건너뛰고
		visit[i] = true;			// i번째 방은 방문했음
		permutate_dfs(paper, result+paper[i]);
		visit[i] = false;
	}
}


bool sosu(int n) {
	/* a는 소수인가 아닌가? */
	vector<bool> arr(n+1, true);
	
    arr[0] = false;
    arr[1] = false;
    
	for(int i = 2; i <= n; i++) {
		if(arr[i]) {
			for(int j = 2; j <= n/i; j++) {
				arr[i*j] = false;
			}
		}
	}

	return arr[n];
}

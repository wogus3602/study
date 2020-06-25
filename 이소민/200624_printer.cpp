#include <string>
#include <vector>
#include <queue>
#include <iostream>
using namespace std;

int solution(vector<int> priorities, int location) {
	int answer = 0;
	int* where = &priorities[location];	// location 지금 어디있는지
	queue<int*> print;			// 프린트 순서 큐 
	vector<int> exist(10, 0);	// 우선순위 n인 일이 존재하는지(우선순위 1부터, 방 10개)
	int pSize = priorities.size();
	bool flag = false;
	int order = 0;				// 몇번째로 출력됐는지
    int* prioFront;
    
	for(int i = 0; i < pSize; i++) { 
		exist[priorities[i]]++;	// exist 벡터에 우선순위 각각 몇개있는지 체크
		print.push(&priorities[i]);			// 일단 다 프린트큐에 넣어두기
	}

	while(!print.empty()) {
		order++;
		prioFront = print.front();
		flag = false;
		
		for(int i = (*prioFront)+1; i <= 9; i++) {
			if(exist[i] != 0) {
				print.pop();
				print.push(prioFront);
				flag = true;
                		order--;
				break;
			}	// 만약 더 높은 우선순위가 있다면 큐 마지막으로 보낸다
		}

		if(!flag) {
			// 더 높은 우선순위가 없었다면
           		exist[*prioFront]--;
			print.pop();
			if(prioFront == where) {
                		answer = order;
                		return answer;
            		}
		}

	}
	
}

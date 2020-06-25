#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(string name) {
    int answer = 0;
    int nameSize = name.size();
    int right, left, amax;
    
    for(right = 0; name[right] != 'A' && right < nameSize; right++) ;
    // right은 A가 시작되기까지 바꿔야할 개수
    
    for(amax = right; name[amax] == 'A'&& amax < nameSize; amax++) ;
    // amax는 right에서 시작해서 연속되는 A가 끝나느느 위치
    
    if(name[amax] == 'A') left = 0;    /* A가 끝나는 점 == name이 끝나는 점인 경우 */
    else left = nameSize-amax;
    // left는 연속되는 A가 끝날때까지 끝에서부터 바꿔야할 개수
    
////// 좌우로 몇 칸 이동하는지 검사할 것
    if(right > amax-right || right == nameSize-1 || left == 0 || right == left) {
    // A를 만났어도 돌아가는 게 관통하는 것보다 많은 움직임이 필요하거나
    // A가 없다면 그냥 직진한다
        
        if(left == 0) answer += right-1;
        // 연속되는 A가 끝까지 이어진다면 right지점까지만 움직이면 된다
        else {
            answer += nameSize-1;
            if(*name.end() == 'A') {
                for(auto iter = name.end(); *iter == 'A'; iter--) { 
                    answer--;
                }
            }
        }
        // 끝까지 안 이어진다면 끝까지 다 움직이는 것으로 하되,
        // 끝에 몇글자가 right과 연속되지 않았어도 A일 수 있으므로 그만큼 빼준다
    }
    
    else {
    // 돌아가는 게 더 빠르다면
        answer += (right-1) // right까지 가고
            + (right-1)     // 왔던 길 되돌아가고
            + left;         // left까지 간다
    }
    cout << "right : " << right << endl;
    cout << "left : " << left << endl;
    cout << "좌우 이동의 결과 " << answer << endl;
    
////// 이제 알파벳을 위아래로 몇번 움직여야 바꿀수 있는지 구한다
    for(int i = 0; i < nameSize; i++) {
        if('A' <= name[i] && name[i] <= 'M')
            answer += name[i]-65;
        else 
            answer += 90-name[i] + 1;
    }
    
    return answer;
}

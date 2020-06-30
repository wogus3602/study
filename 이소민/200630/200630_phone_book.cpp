#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    int bookSize = phone_book.size();
    int minSize;
    char firstInt;
    int i, j = 0;
    
    sort(phone_book.begin(), phone_book.end());
    /* phone_book을 맨 앞자리 숫자로 정렬 */
    
    for(i = 0; i < phone_book.size(); i++) {
        minSize = phone_book[i].size();
        firstInt = phone_book[i][0];
    /* 정렬하게 되면 맨 앞이 같은 숫자들 중 가장 앞에 거가 prefix */    
        
        for(j = i+1; phone_book[j][0] == firstInt; j++) {
            if(phone_book[i] == phone_book[j].substr(0, minSize))    
                return false;
        }
    /* 접두사인 경우 false */
        
        i = j+1;
    }
    
    return answer;
}

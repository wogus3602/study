#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;

    int pnum = 0;
    int ynum = 0;
    
    for(auto it = s.begin(); it != s.end(); it++) {
        if(*it == 'p' || *it == 'P') pnum++;
        else if (*it == 'y' || *it == 'Y') ynum++;
    }

    if(pnum != ynum) answer = false;
    
    return answer;
}

#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    
    if(s.size() != 4 && s.size() != 6) return false;
    
    for(auto it = s.begin(); it != s.end(); it++) {
        if(*it < 48 || *it > 57) return false;
    }
    
    return true;
}

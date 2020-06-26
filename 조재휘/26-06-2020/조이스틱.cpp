#include <string>
#include <vector>

using namespace std;

int alphabet(char alp) {
    if (alp >= 'N') {
        return int ('Z' - alp + 1);
    }
    else {
        return int (alp - 'A');
    }
}

int solution(string name) {
    int answer = 0;
    int idx = 0, start = 0, end = 0, count = 0, max = 0;
    int tmp;
    while (idx < name.size()) {
        if (name[idx] == 'A') {
            count++;
            if (count > max) {
                max = count;
                end = idx;
            }
        }
        else {
            count = 0;
        }
        idx++;
    }
    start = end - max + 1;
    for (int i = 0; i < name.size(); i++) {
        answer += alphabet(name[i]);
    }
    if ((name.size() - end - 1) > (start)) {
        tmp = (start - 1)  * 2 + name.size() - end - 1;
    }
    else tmp = (name.size() - end - 1) * 2 + start - 2;
    
    if (name.size() - 1 > tmp) {
        return tmp + answer;
    }
    else return answer + name.size() - 1;
}

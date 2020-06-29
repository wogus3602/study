#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

string makeRight(string u, string v);
bool isRight(string w);
void share(string w, string* u, string* v);

string solution(string p) {
    string answer = p;
    stack<char> openStack;
    bool right;
    
    right = isRight(p);
    
    if(!right) {
        // 균형잡힌 문자열을 올바른 문자열로 만들어야 한다
        string sendU, sendV;
        share(p, &sendU, &sendV);
        makeRight(sendU, sendV);
    }
    
    return answer;
}

string makeRight(string u, string v) {
    
    string rightV;
    string sendU, sendV;
    share(v, &sendU, &sendV);
    rightV = makeRight(sendU, sendV);
    // 일단 V부터 옳게 만들자
    
    if(isRight(u)) {    
        // v는 이미 올바르게 만들었다
        // u가 옳다면 다 옳게 변한것
        return u+rightV;
    }
    
    else {  // u가 올바르지 않다면
        string rightU = "";
        rightU += '(';      // 4-1
        rightU += rightV;   // 4-2
        rightU += ')';      // 4-3
    
        for(auto it = u.begin() + 1; it != u.end() - 2; it++) {
            if(*it == '(') rightU += ')';
            else rightU += '(';
        }
        
        return rightU;
    }
}

void share(string w, string* u, string* v) {
    if(w == "") {
	*u = "";
	*v = "";
	return;
    }
    
    // w를 u와 v로 나눈다
    string temp_u;
    string temp_v;
    int i;
    
    // 나누는 방법 : 
    // 같은게 나오는 동안 i를 카운트하고
    // i * 2만큼 자른다
    // 예시 : (((가 나왔으면 3개더해서 ((()))보내

    for(i = 0; w[i] == w[0]; i++) ;
    
    temp_u = w.substr(0, i*2);
	cout << "w : " << w << endl;
    if(w.size() == 2) temp_v = "";
    else temp_v = w.substr(i*2 + 2);
    cout << "temp u : " << temp_u << endl;
    cout << "temp v : " << temp_v << endl;

    *u = temp_u;
    *v = temp_v;
    
    cout << "*u is " << *u << endl;
    cout << "*v is " << *v << endl;
}

bool isRight(string w) {
    auto it = w.begin();
    bool answer = true;
    stack<char> openStack;
    int openNum = 0;
    
    for(; it != w.end(); it++) {
        if (*it == '(')
            openStack.push('(');
        else {
            if(openStack.empty()) {
                answer = false;
                break;
            }
            openStack.pop();
        }
    }
    
    return answer;
}

int main(int argc, char** argv) {
	solution("(()())()");
	solution(")(");
	solution("()))((()");
}

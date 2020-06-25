// https://programmers.co.kr/learn/courses/30/lessons/62048
using namespace std;

int min(int a, int b);
int max(int a, int b);
int gcd(int w, int h);  // a와 b의 최대공약수

long long solution(int w,int h) {
    long long answer = 0;
    // 이제부터 answer로 잘리는 선에 겹치는 정사각형 개수를 셀것
    long long wh = w*h;
    int gcdwh = gcd(max(w,h), min(w,h));
    // w, h 최대공약수
    
    answer = gcdwh * ((w/gcdwh) + (h/gcdwh) - 1);
    
    return wh - answer;
}

int min(int a, int b) {
    return (a < b ? a : b) * 1.0;
}

int max(int a, int b) {
    return (a > b ? a : b) * 1.0;
}

int gcd(int w, int h) {
    int tmp;
    while(h != 0) {
        tmp = w%h;
        w = h;
        h = tmp;
    }

    return w;
}

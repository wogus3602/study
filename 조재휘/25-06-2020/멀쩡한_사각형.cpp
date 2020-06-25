using namespace std;

long long gcd(int a, int b) {
    if (a == b) {
        return a;
    }
    else if (a > b) {
        return gcd(a - b, b);
    }
    else return gcd(a, b - a);
}

long long solution(int w,int h) {
    long long answer = 1;
    long long gcdwh = gcd(w, h);
    answer = w * h - gcdwh * ((w / gcdwh) + (h / gcdwh) - 1);
    return answer;
}

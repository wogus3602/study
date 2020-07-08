import sys
#재귀한계치 설정
sys.setrecursionlimit(10**6)

#최대공약수
def gcd(a,b):
    if a%b==0:
        return b
    else:
        return gcd(b,a%b)

n, m = map(int, input().split(' '))

cd = gcd(n,m)

print(m-cd)
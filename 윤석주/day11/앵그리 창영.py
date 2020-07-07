import math

n, w, h = map(int,input().split(' '))
#math함수를 이용하여 루트값 계산(사각형 내에선 대각선이 가장 김)
maxLength = math.sqrt(w*w+h*h)

for i in range(n):
    l = int(input())
    if l > maxLength:
        print("NE")
    else:
        print("DA")
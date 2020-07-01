n = input()
length = len(n)#입력 받은 숫자의 길이
target = 10**(length-1)#길이에 해당하는 10의 제곱 수
n = int(n)
answer = 0

#숫자의 길이 x 경계값 사이의 갯수
while target > 0:
    answer += (n-target+1)*length
    n = target-1
    target = target // 10
    length-=1

print(answer)
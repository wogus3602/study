import sys

#알파벳 갯수 table생성(0으로 초기화)
alpha = [0]*26

#중간에 엔터가 2줄 이상 들어갈 경우 input함수는 읽기를 중단
string = sys.stdin.read()

#소문자인 경우, 해당하는 index를 계산하여 +1
for c in string:
    if 'a'<=c<='z':
        index = ord(c)-ord('a')
        alpha[index] += 1

#최대 갯수 구하기
maximum = max(alpha)

for i in range(len(alpha)):
    if alpha[i] == maximum:
        #index에 해당하는 알파벳 계산
        character = chr(i+ord('a'))
        print(character,end='')
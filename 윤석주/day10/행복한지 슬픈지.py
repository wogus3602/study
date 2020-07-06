message = input()
#감정 갯수
sad = 0
happy = 0

#:가 나온 경우 다음, 다다음의 인덱스 여부를 확인한 뒤 알맞은 감정 +1
for i in range(len(message)):
    if message[i] == ':':
        if i+1<len(message) and message[i+1] == '-':
            if i+2<len(message):
                if message[i+2] == ')':
                    happy+=1
                elif message[i+2] == '(':
                    sad+=1

#감정 갯수별 프린트
if not sad and not happy:
    print("none")
elif happy > sad:
    print("happy")
elif happy < sad:
    print("sad")
else:
    print("unsure")
def solution(name):
    answer = 0
    start = -1
    Alength = -1
    leftOrRight = 0
    for i in range(1,len(name)):
        if name[i] == 'A':
            step = i
            length = 0
            while step < len(name) and name[step] == 'A':
                length+=1
                step+=1
            if length > Alength:
                Alength = length
                start = i
            i+=length
    Alength - len(name)-1-Alength
    profit = Alength-2*(start-1)
    Alength = 0
    for i in range(len(name)-1,0,-1):
        if name[i] == 'A':
            step = i
            length = 0
            while step > 0 and name[step] == 'A':
                length+=1
                step-=1
            if length > Alength:
                Alength = length
                start = i
            i-=length
    
    if Alength - (len(name)-1-start) > profit:
        profit = Alength - (len(name)-1-start)
        leftOrRight = 1
    if start == -1 or profit < 0:
        for n in name:
            up = ord(n)-ord('A')
            down = ord('Z')-ord(n)+1
            answer += min(up,down)
        answer+=len(name)-1
    else:
        if leftOrRight:
            for i in range(len(name)-1,start,-1):
                up = ord(name[i])-ord('A')
                down = ord('Z') - ord(name[i])+1
                answer+= min(up,down)
            answer += 2*(len(name)-1-start)
            for i in range(start-Alength+2):
                up = ord(name[i])-ord('A')
                down = ord('Z') - ord(name[i])+1
                answer+= min(up,down)
            answer += start-Alength
        else:
            for i in range(start):
                up = ord(name[i])-ord('A')
                down = ord('Z') - ord(name[i])+1
                answer+= min(up,down)
            answer += 2*(start-1)
            for i in range(len(name)-1,start+Alength-1,-1):
                up = ord(name[i])-ord('A')
                down = ord('Z') - ord(name[i])+1
                answer+= min(up,down)
            answer += len(name)-1 - start
    print(leftOrRight)
    print(profit)
    return answer
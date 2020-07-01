board = [[False]*101 for _ in range(101)]
answer = 0

n = int(input())
for i in range(n):
    #입력 받은 색종이의 넓이
    tempArea = 100
    
    x, y = map(int,input().split(' '))
    
    #입력 받은 색종이 중 이미 종이가 있는 자리의 넓이
    existArea = 0
    
    #종이가 있는 자리 확인
    for _x in range(x,x+10):
        for _y in range(y,y+10):
            if board[_x][_y]:
                existArea+=1
    
    #입력된 종이에서 이미 종이가 있는 넓이 빼주기
    answer += tempArea - existArea
    
    #종이가 붙은 자리의 flag값 true
    for _x in range(x,x+10):
        for _y in range(y,y+10):
            board[_x][_y] = True
    
print(answer)
#능력치배열 (HP,MP,공격력,방어력)
abilities = [1,1,0,-1]

t = int(input())

for i in range(t):
    #능력치와 아이템 입력
    case = list(map(int, input().split(' ')))
    
    #합산하여 abilities배열 수정
    abilities[0] = case[0]+case[4]
    abilities[1] = case[1]+case[5]
    abilities[2] = case[2]+case[6]
    abilities[3] = case[3]+case[7]
    
    #문제의 조건 적용
    #HP
    if abilities[0] < 1:
        abilities[0] = 1
    #MP
    if abilities[1] < 1:
        abilities[1] = 1
    #공격력
    if abilities[2] < 0:
        abilities[2] = 0
    
    #전투력 계산
    ability = 1*abilities[0] + 5*abilities[1] + 2*abilities[2] + 2*abilities[3]
    print(ability)
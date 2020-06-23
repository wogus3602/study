def solution(arrangement):
    answer = 0
    sticks = 0
    for i in range(len(arrangement)-1):
        if arrangement[i] == '(':
            if arrangement[i+1] == ')':
                answer += sticks
            else:
                sticks += 1
                answer += 1
        else:
            if arrangement[i-1] != '(':
                sticks -= 1
    return answer
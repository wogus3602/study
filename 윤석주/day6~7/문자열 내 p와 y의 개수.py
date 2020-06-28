def solution(s):
    answer = False
    numOfP = s.count('p')+s.count('P')
    numOfY = s.count('y')+s.count('Y')
    
    if numOfP == numOfY:
        answer = True

    return answer
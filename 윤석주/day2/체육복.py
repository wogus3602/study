def solution(n, lost, reserve):
    answer = n
    #여유가 있는 학생들의 번호 복사본
    reserveTemp = reserve.copy()
    for l in reserveTemp:
        if l in lost:
            reserve.remove(l)
            lost.remove(l)
    
    #잃어버린 학생들의 번호 복사본
    tempLost = lost.copy()
    
    for l in tempLost:
        if l-1 in reserve:
            lost.remove(l)
            reserve.remove(l-1)
        elif l+1 in reserve:
            lost.remove(l)
            reserve.remove(l+1)
    
    answer -= len(lost)
    
    return answer
def solution(a, b):
    answer = 0
    if a == b:
        return a
    if a > b:
        a, b = b, a
    
    for num in range(a,b+1):
        answer+=num
    return answer
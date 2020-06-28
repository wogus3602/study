def solution(s):
    answer = True
    if len(s) != 4 and len(s) != 6:
        answer = False
        
    for n in s:
        if ord('0') > ord(n) or ord('9') < ord(n):
            answer = False
            break
    
    return answer
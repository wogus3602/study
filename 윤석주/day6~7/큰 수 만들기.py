def solution(number, k):
    answer = []
    for i in range(len(number)):
        if k == 0:
            answer += number[i:]
            break
        
        while answer and k and answer[-1] < number[i]:
            answer.pop()
            k -= 1
        answer.append(number[i])
    
    while k:
        answer.pop()
        k-=1

    return ''.join(answer)
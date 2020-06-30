def solution(d, budget):
    answer = 0
    d.sort()
    for num in d:
        budget -= num
        if budget < 0:
            break
        answer+=1
    return answer
def solution(prices):
    answer = []
    for i in range(len(prices)-1):
        start = 0
        for j in range(i+1,len(prices)):
            start+=1
            if prices[j] < prices[i]:
                break
        answer.append(start)
    answer.append(0)
    return answer
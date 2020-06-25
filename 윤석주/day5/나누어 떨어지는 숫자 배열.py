def solution(arr, divisor):
    answer = []
    for num in arr:
        if num % divisor == 0:
            answer.append(num)
    if answer:
        answer.sort()
    else:
        answer.append(-1)
    return answer
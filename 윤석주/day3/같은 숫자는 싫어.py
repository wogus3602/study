def solution(arr):
    answer=[arr[0]]
    top = 0
    for element in arr:
        if element != answer[top]:
            answer.append(element)
            top+=1
    
    return answer
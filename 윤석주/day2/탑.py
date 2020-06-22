def solution(heights):
    answer = []
    for i in range(len(heights)):
        height = heights[i]
        step = i - 1
        while step >= 0:
            if heights[step] > height:
                answer.append(step+1)
                break
            step -= 1
        if step < 0:
            answer.append(0)
        
    return answer
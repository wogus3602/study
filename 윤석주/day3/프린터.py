def solution(priorities, location):
    answer = 0
    targetIndex = location
    while priorities:
        if priorities[0] == max(priorities):
            priorities.pop(0)
            answer+=1
            if targetIndex == 0:
                break
            else:
                targetIndex -= 1
        else:
            priorities.append(priorities.pop(0))
            if targetIndex == 0:
                targetIndex = len(priorities)-1
            else:
                targetIndex -= 1
        
    return answer
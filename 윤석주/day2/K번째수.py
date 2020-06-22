def solution(array, commands):
    answer = []
    for command in commands:
        start, end, index = command
        answer.append(sorted(array[start-1:end])[index-1])
    return answer
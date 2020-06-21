def solution(board, moves):
    answer = 0
    result = []
    numberOfRaw = len(board)
    for move in moves:
        current = 0
        for raw in range(numberOfRaw):
            if board[raw][move-1] != 0:
                current = board[raw][move-1]
                board[raw][move-1] = 0
                break
        if current != 0:
            if result:
                if result[-1] == current:
                    result.pop()
                    answer += 2
                else:
                    result.append(current)
            else:
                result.append(current)
    return answer
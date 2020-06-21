def solution(baseball):
    candidates = initCandy()
    for game in baseball:
        for i in range(len(candidates)):
            candidate = candidates[i]
            if candidate != 0:
                strike, ball = getScore(candidate,str(game[0]))
                if strike != game[1] or ball != game[2]:
                    candidates[i] = 0
    answer = len(set(candidates))-1
    return answer

def getScore(candidate,game):
    strike = 0
    ball = 0
    for i in range(3):
        if candidate[i] == game[i]:
            strike += 1
        elif candidate[i] in game:
            ball += 1
    return strike, ball

def initCandy():
    candidates = []
    for i in range(123,988):
        candidate = str(i)
        if candidate[0] == candidate[1] or candidate[0] == candidate[2] or candidate[1] == candidate[2] or "0" in candidate:
            continue
        candidates.append(candidate)
    return candidates
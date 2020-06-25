import heapq

def solution(scoville, K):
    answer = 0
    heapq.heapify(scoville)
    while True:
        mini = heapq.heappop(scoville)
        if mini >= K:
            break
        if not scoville:
            answer = -1
            break
        nextMini = heapq.heappop(scoville)
        newMini = mini + nextMini*2
        heapq.heappush(scoville,newMini)
        answer+=1
    return answer
from collections import deque
#시간 복잡도를 위해 deque사용 (양방향 push, pop이 O(1))

def solution(bridge_length, weight, truck_weights):
    answer = 0
    bridge = deque([0]*bridge_length)
    current = 0
    while current < len(truck_weights):
        bridge.pop()
        bridge.appendleft(0)
        if sum(bridge) + truck_weights[current] <= weight:
            bridge[0] = truck_weights[current]
            current+=1
        answer+=1
    
    if sum(bridge) > 0:
        for i in range(bridge_length):
            if bridge[i] > 0:
                answer += bridge_length-i
                break
    
    return answer
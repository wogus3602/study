def solution(people, limit):
    answer = 0
    people.sort(reverse=True)
    start = 0
    end = len(people)-1
    while start<=end:
        boat = 0
        while boat+people[start] <= limit and start != end:
            boat += people[start]
            start+=1
        while boat+people[end] <= limit:
            boat += people[end]
            end-=1
        answer+=1
    return answer
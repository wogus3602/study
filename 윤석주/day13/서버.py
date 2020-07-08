n, t = map(int,input().split(' '))

jobs = input().split(' ')

answer = 0
time = 0

for i in range(len(jobs)):
    if time+int(jobs[i]) <= t:
        answer+=1
        time+=int(jobs[i])
    else:
        break

print(answer)
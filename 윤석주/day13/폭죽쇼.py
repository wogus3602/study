n, c = map(int,input().split(' '))
answer = 0

check = [0]*(c+1)

for i in range(n):
    s = int(input())
    for step in range(s,c+1,s):
        check[step] = 1


print(sum(check))
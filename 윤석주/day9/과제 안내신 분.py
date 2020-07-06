n = 30
check = [False]*(n)

#과제 해왔나 check
for i in range(n-2):
    idx = int(input())
    check[idx-1] = True

for studentId in range(1,n+1):
    if not check[studentId-1]:
        print(studentId)
n = int(input())

#사각형 숫자

#한줄짜리
lecNum = n
check = set()

#만들 수 있는 사각형 확인
for i in range(2,n):
    k=2
    while i*k <= n:
        if (i,k) not in check:
            lecNum+=1
            #순서쌍 추가(같은 모양 추가)
            check.add((i,k))
            check.add((k,i))
        k+=1

print(lecNum)
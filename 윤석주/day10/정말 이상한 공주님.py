n = int(input())
princess = []
#원본 데이터 princess배열에 입력
for i in range(n):
    row = input()
    princess.append(row)

#case선택용 option변수
option = int(input())

#각 case별 print함수 생성
def printOrigin(arr):
    for i in range(len(arr)):
        print(arr[i])

def printLeftToRight(arr):
    for i in range(len(arr)):
        l = len(arr[i])
        for j in range(l-1,-1,-1):
            print(arr[i][j],end='')
        print()

def printBottomToTop(arr):
    for i in range(len(arr)-1,-1,-1):
        print(arr[i])

#option에 따른 case구분
if option == 1:
    printOrigin(princess)
elif option == 2:
    printLeftToRight(princess)
elif option == 3:
    printBottomToTop(princess)
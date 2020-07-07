e, f, c = map(int,input().split(' '))
#빈병수
emptyBottles = e+f
#먹은 탄산수
bottles = 0
#탄산을 3개 먹으면 빈병이 다시 1개 생김(먹는만큼 다시 빈병 생김)
while emptyBottles >= c:
    bottles += emptyBottles//c
    emptyBottles = emptyBottles//c + emptyBottles%c

print(bottles)
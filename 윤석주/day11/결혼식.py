n = int(input())
#친구배열생성
friends = [list() for _ in range(n)]
#상근이 결혼식에 올 친구
myFriends = 0
#오는 친구 체크
check = [False]*n
#상근 제외
check[0] = True

m = int(input())
#자기자신의 인덱스에 친구 추가
for i in range(m):
    myself, friend = map(int,input().split(' '))
    friends[myself-1].append(friend)
    friends[friend-1].append(myself)

#상근이 직속 친구
for friend in friends[0]:
    if not check[friend-1]:
        myFriends+=1
        check[friend-1] = True


#상근이 친구의 친구
for friend in friends[0]:
    f_friends = friends[friend-1]
    for f in f_friends:
        if not check[f-1]:
            myFriends+=1
            check[f-1]=True

print(myFriends)
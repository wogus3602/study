wUniv = []
kUniv = []

#입력받기
for i in range(10):
    wUniv.append(int(input()))

for i in range(10):
    kUniv.append(int(input()))

#내림차순 정렬
wUniv.sort(reverse=True)
kUniv.sort(reverse=True)
#top3점수 합
print(sum(wUniv[:3]),sum(kUniv[:3]))
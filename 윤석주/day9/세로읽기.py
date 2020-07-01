words = []
n = 5
maxLength = 0
for i in range(n):
    word = input()
    words.append(word)
    if len(word) > maxLength:
        maxLength = len(word)

answer = ''

for cul in range(maxLength):
    for raw in range(n):
        if len(words[raw]) > cul:
            answer+=words[raw][cul]
print(answer)
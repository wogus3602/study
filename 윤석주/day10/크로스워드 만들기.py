wordA, wordB = input().split(' ')

row, col = 0, 0

for i in range(len(wordA)):
    if wordA[i] in wordB:
        row = i
        col = wordB.index(wordA[i])
        break

for r in range(len(wordB)):
    for c in range(len(wordA)):
        if r == col:
            print(wordA[c],end='')
        elif c == row:
            print(wordB[r],end='')
        else:
            print('.',end='')
    print()
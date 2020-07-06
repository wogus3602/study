n = int(input())

for case in range(n):
    word1, word2 = input().split(' ')
    
    print("Distances:",end="")
    
    for i in range(len(word1)):
        diff = ord(word2[i]) - ord(word1[i])
        
        if diff < 0:
            diff += 26

        print("",diff,end="")
    print()
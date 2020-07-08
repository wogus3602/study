r, c = map(int,input().split(' '))

count = r-1
strings = []
for i in range(r):
    string = input()
    strings.append(string)

new_strings = []
for j in range(c):
    new_string = ''
    for i in range(r-1,-1,-1):
        new_string += strings[i][j]
    new_strings.append(new_string)
    
for i in range(r):
    flag = False
    new_cs = []
    for string in new_strings:
        new_cs.append(string[:i+1])
    
    if len(new_cs)==len(set(new_cs)):
        count -= i
        break

print(count)
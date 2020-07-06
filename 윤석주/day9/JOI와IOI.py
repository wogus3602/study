string = input()

joi = 0
ioi = 0

for i in range(len(string)-2):
    if string[i:i+3] == 'JOI':
        joi+=1
    elif string[i:i+3] == 'IOI':
        ioi+=1
        
print(joi)
print(ioi)
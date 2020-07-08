buttons = {'a':'2','b':'22','c':'222','d':'3','e':'33','f':'333',
           'g':'4','h':'44','i':'444','j':'5','k':'55','l':'555',
           'm':'6','n':'66','o':'666','p':'7','q':'77','r':'777',
           's':'7777','t':'8','u':'88','v':'888','w':'9','x':'99',
           'y':'999','z':'9999'}

change = dict()
changes = input().split(' ')


for i in range(1,10):
    change[changes[i-1]] = str(i)
    
message = input()
answer_temp = ''
for i in range(len(message)):
    if i>0 and buttons[message[i]][0] in buttons[message[i-1]]:
        answer_temp+='#'
    answer_temp+=buttons[message[i]]

answer = ''
for c in answer_temp:
    if c == '#':
        answer+='#'
    else:
        answer+=change[c]
print(answer)
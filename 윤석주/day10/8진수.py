binary = input()

#길이가 3의 배수가 될 때 까지 이진수의 앞에 0 추가
while len(binary)%3 != 0:
    binary = '0'+binary
    
#2진수 -> 8진수 표 준비
table = {'000':'0', '001':'1', '010':'2', '011':'3', '100':'4',
         '101':'5', '110':'6', '111':'7'}
    
#3자리씩 뽑아 해당하는 table값(8진수 값) 프린
for i in range(0,len(binary)-2,3):
    key = binary[i:i+3]
    print(table[key],end='')

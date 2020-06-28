def solution(p):
    answer = ''
    if p == '':
        return answer
    left, right = '', ''
    for i in range(0,len(p)):
        if isBalancedNumber(p[:i+1]):
            left = p[:i+1]
            if i == len(p)-1:
                right = ''
            else:
                right = p[i+1:]
            break
    
    if isRightNumber(left):
        answer = left + solution(right)
    else:
        answer = '('+solution(right)+')'+reverse(left)
    return answer

def reverse(paren):
    paren = list(paren)
    for i in range(1,len(paren)-1):
        if paren[i] == '(':
            paren[i] = ')'
        else:
            paren[i] = '('
            
    return ''.join(paren[1:len(paren)-1])

def isBalancedNumber(paren):
    result = False
    if paren.count('(') == paren.count(')'):
        result = True
        for i in range(2,len(paren)-2):
            if paren[:i].count('(') == paren[:i].count(')') and paren[i:].count('(') == paren[i:].count(')'):
                result=False
                break
                
    return result

def isRightNumber(number):
    flag = True
    opens = []
    for n in number:
        if n == '(':
            opens.append(n)
        else:
            if opens:
                opens.pop()
            else:
                flag = False
                break
    if opens:
        flag = False
    return flag
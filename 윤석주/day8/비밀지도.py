def solution(n, arr1, arr2):
    answer = []
    map1 = []
    map2 = []
    for num in arr1:
        binary = []
        t = num
        while t > 1:
            binary.append(t%2)
            t //=2
        if t == 1:
            binary.append(1)
        else:
            binary,append(0)
        binary.reverse()
        map1.append(binary)
    for num in arr2:
        binary = []
        while num > 1:
            binary.append(num%2)
            num //=2
        if num == 1:
            binary.append(1)
        else:
            binary.append(0)
        binary.reverse()
        map2.append(binary)
        
    l = 0
    for number in map1:
        if len(number) > l:
            l = len(number)
    for number in map2:
        if len(number) > l:
            l = len(number)
    
    for i in range(len(map1)):
        size = l - len(map1[i])
        for j in range(size):
            map1[i] = [0] + map1[i]
    for i in range(len(map2)):
        size = l - len(map2[i])
        for j in range(size):
            map2[i] = [0] + map2[i]
    
    for i in range(len(map1)):
        raw = ''
        l = 0
        for j in range(len(map1[i])):
            if not map1[i][j] and not map2[i][j]:
                raw += ' '
            else:
                raw += '#'
        answer.append(raw)
    
    return answer
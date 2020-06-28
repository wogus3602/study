import itertools
import math

def solution(numbers):
    answer = 0
    if not len(numbers):
        return answer
    primes = []
    for l in range(len(numbers)):
        p = itertools.permutations(numbers,l+1)
        for number in set(p):
            if isPrime(number,primes):
                answer+=1
    return answer

def isPrime(numbers,primes):
    flag = True
    number = int(''.join(numbers))
    if number < 2:
        return False
    for i in range(2,int(math.sqrt(number)+1)):
        if number % i == 0:
            flag = False
            break
    if flag:
        if number in primes:
            flag = False
        else:
            primes.append(number)
    return flag
import math

def solution(n):
    answer = 0
    primes = [False]*(n+1)
    for number in range(2,n+1):
        if primes[number]:
            continue
        else:
            if isPrime(number):
                answer+=1
        for i in range(number+number,n+1,number):
            primes[i] = True
    
    return answer+1

def isPrime(number):
    result = True
    for i in range(2,math.ceil(math.sqrt(number)+1)):
        if number % i == 0:
            result = False
            break
    return result
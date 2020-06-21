def solution(answers):
    random1 = [1,2,3,4,5]
    random2 = [2,1,2,3,2,4,2,5]
    random3 = [3,3,1,1,2,2,4,4,5,5]
    anss = [0,0,0]
    answer = []
    for i in range(len(answers)):
        c_answer = answers[i]
        if c_answer == random1[i%5]:
            anss[0]+=1
        if c_answer == random2[i%8]:
            anss[1]+=1
        if c_answer == random3[i%10]:
            anss[2]+=1
    
    maximum = max(anss)
    for i in range(len(anss)):
        if anss[i] == maximum:
            answer.append(i+1)
    
    return answer
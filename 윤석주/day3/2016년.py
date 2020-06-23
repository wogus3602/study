def solution(a, b):
    #필요한 변수 준비 (요일, 월별 일 수, index)
    answer = ''
    Days = ["FRI","SAT","SUN","MON","TUE","WED","THU"]
    Diary = [31,29,31,30,31,30,31,31,30,31,30,31]
    index = 0
    #지난날짜
    for month in range(0,a-1):
        index += Diary[month]
    index += b-1
    #index 계산
    answer = Days[index%len(Days)]
    return answer
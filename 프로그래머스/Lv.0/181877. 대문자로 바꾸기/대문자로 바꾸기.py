def solution(myString):
    ms_list = list(myString)
    for i in range(len(ms_list)):
        if ms_list[i].islower():
            ms_list[i]=ms_list[i].upper()
    answer = ''.join(ms_list)
    return answer
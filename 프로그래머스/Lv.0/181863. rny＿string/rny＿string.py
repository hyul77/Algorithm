def solution(rny_string):
    rlist = list(rny_string)
    for i in range(len(rlist)):
        if rlist[i] == 'm':
            rlist[i] = 'rn'
    answer = ''.join(rlist)
    return answer
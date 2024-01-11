def solution(myString, pat):
    ms_l = list(myString)
    p_l = list(pat)
    for i in range(len(ms_l)):
        ms_l[i] = ms_l[i].lower()
    for i in range(len(p_l)):
        p_l[i] = p_l[i].lower()
    myString = ''.join(ms_l)
    pat = ''.join(p_l)
    if pat in myString:
        return 1
    else:
        return 0
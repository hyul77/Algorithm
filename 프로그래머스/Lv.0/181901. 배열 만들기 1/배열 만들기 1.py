def solution(n, k):
    dlist = []
    for i in range(1,n+1):
        if i%k == 0:
            dlist.append(i)
    return dlist
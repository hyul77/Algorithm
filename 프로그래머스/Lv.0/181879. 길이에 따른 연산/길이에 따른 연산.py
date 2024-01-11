def solution(num_list):
    if len(num_list) >= 11:
        a = 0
        for i in num_list:
            a +=i
        return a
    else:
        a = 1
        for i in num_list:
            a *=i
        return a
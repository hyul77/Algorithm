def solution(my_string, is_suffix):
    msl = list(my_string)
    isl = list(is_suffix)
    if len(isl) > len(msl):
        return 0
    else:
        a = 0
        for i in range(len(isl)):
            a-=1
            if msl[a] != isl[a]:
                return 0
        return 1
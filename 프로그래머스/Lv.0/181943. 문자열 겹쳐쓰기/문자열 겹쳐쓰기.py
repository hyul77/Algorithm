def solution(my_string, overwrite_string, s):
    ms_list = list(my_string)
    ow_list = list(overwrite_string)
    for i in range(len(ow_list)):
        ms_list[i+s] = ow_list[i]
    answer = ''.join(ms_list)
    return answer
def solution(my_string, alp):
    my_list = list(my_string)
    for i in range(len(my_list)):
        if my_list[i] == alp:
            my_list[i] = my_list[i].upper()
    
    
    answer = ''.join(my_list)
    return answer
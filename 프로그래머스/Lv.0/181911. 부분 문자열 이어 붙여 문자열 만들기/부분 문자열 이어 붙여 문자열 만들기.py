def solution(my_strings, parts):
    answer = ''
    for i in range(len(parts)):
        si, ei = map(int, parts[i])
        answer += my_strings[i][si:ei+1]
    return answer
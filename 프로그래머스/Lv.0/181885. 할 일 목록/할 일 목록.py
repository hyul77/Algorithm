def solution(todo_list, finished):
    again_list = []
    for i in range(len(todo_list)):
        if finished[i] == False:
            again_list.append(todo_list[i])
    return again_list
def solution(code):
    mode = 0
    ret_l = []

    for i, char in enumerate(code):
        if char == "1":
            mode = 1 - mode
            continue

        if mode == 0 and i % 2 == 0:
            ret_l.append(char)
        elif mode == 1 and i % 2 == 1:
            ret_l.append(char)

    ret = "".join(ret_l)
    if not ret:
        return "EMPTY"
    return ret
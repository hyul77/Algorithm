def solution(a, b, c):
    ans=0
    if a==b and b==c:
        ans=(a+b+c)*(a*a+b*b+c*c)*(a*a*a+b*b*b+c*c*c)
    elif a==b or b==c or c==a:
        ans=(a+b+c)*(a*a+b*b+c*c)
    else:
        ans=(a+b+c)
    return ans
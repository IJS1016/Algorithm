import sys

def scanf() :
    return sys.stdin.readline().rstrip()

dp_w = {}

def recursive(w) :
    a, b, c = w
    key = str(w)

    if key in dp_w.keys() :
        return dp_w[key]

    elif a <= 0 or b <= 0 or c <= 0 :
        dp_w[key] = 1 
        return 1

    elif a > 20 or b > 20 or c > 20 :  
        result = recursive([20, 20, 20])
        dp_w[key] = result
        return result
    
    elif a < b and b < c : 
        result =  recursive([a, b, c-1]) + recursive([a, b-1, c-1]) - recursive([a, b-1, c]) 
        dp_w[key] = result
        return result

    else :
        result = recursive([a-1, b, c]) + recursive([a-1, b-1, c]) + recursive([a-1, b, c-1]) - recursive([a-1, b-1, c-1]) 
        dp_w[key] = result
        return result

while True :
    w = list(map(int, scanf().split(" ")))
    a, b, c = w

    if w == [-1, -1, -1] :
        break

    print(f"w({a}, {b}, {c}) = {recursive(w)}")
# https://www.acmicpc.net/problem/1463
x = int(input())

cnt = 0

while x != 1:
    if x % 3 == 0 :
        x /= 3
    elif x % 2 == 0 :
        x /= 2
    else :
        x -= 1
    cnt += 1

print(cnt)
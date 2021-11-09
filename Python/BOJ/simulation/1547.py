import sys
# 입출력 https://dailyheumsi.tistory.com/32

num = int(sys.stdin.readline())
change_cups = []

for _ in range(num) :
    change_cups.append(list(map(int, sys.stdin.readline().split(' '))))

have_ball = 1

for change_cup in change_cups :
    if have_ball not in change_cup :
        continue
    else :
        if have_ball == change_cup[0] :
            have_ball = change_cup[1]
        else :
            have_ball = change_cup[0]

print(have_ball)

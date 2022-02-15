# https://www.acmicpc.net/problem/11723
# Key error : set 함수에서 없는 원소 remove 시에 KeyError 발생
# Value error : type 변경 시 올바르지 않은 값이 들어올 때
# bit mask (0~20)으로도 풀 수 있음
import sys
input = sys.stdin.readline

m = int(input())
s = set()

for _ in range(m) :
    line = input()

    if 'all' in line :
        s = set(range(1, 21))
        continue
    
    elif 'empty' in line :
        s = set({})
        continue

    func, num = line.split(" ")
    num = int(num)

    if func == 'add' :
        s.add(num)

    if func == 'remove' :
        if num in s :
            s.remove(num)

    if func == 'check' :
        print(int(num in s))
    
    if func == 'toggle' :
        if num not in s :
            s.add(num)
        else :
            s.remove(num)


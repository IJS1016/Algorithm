import sys

def scanf() :
    return sys.stdin.readline().rstrip()

n, m = map(int, scanf().split(" "))
infos = {}

for _ in range(n) :
    site, password = scanf().split(" ")
    infos[site] = password

for _ in range(m) :
    print(infos[scanf()])
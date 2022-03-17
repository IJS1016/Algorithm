import sys

def scanf() :
    return sys.stdin.readline().rstrip()

n, m = map(int, scanf().split(" "))

not_see = set()
not_listen = set()

for _ in range(n) :
    not_see.add(scanf())

for _ in range(m) :
    not_listen.add(scanf())

result = not_see.intersection(not_listen)

result = list(result)
result.sort()

print(len(result))
for r in result :
    print(r)

import sys

def scanf() :
    return sys.stdin.readline().rstrip()

def convert_str2int(l) :
    return list(map(int, l))



t = scanf()
m, n, k = convert_str2int(scanf().split(" "))

cabbage_tree = []

for _ in range(k) :
    convert_str2int((scanf().split(" ")))

    # 각 노드 정보들이 

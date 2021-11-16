# https://www.acmicpc.net/problem/1158

n, k = input().split(" ")
#n, k = 7, 3

n = int(n)
k = int(k)

array = [x for x in range(n)]
result = []

idx = k % n

while len(array) > 0 :
    result.append(array.pop(idx))
    if len(array) == 0 :
        break
    idx = (idx + k - 1) % len(array)
    
for i in range(n) :
    if result[i] == 0 :
        result[i] = n
        break

print(f"<{', '.join(map(str, result))}>")


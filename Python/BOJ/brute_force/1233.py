# https://www.acmicpc.net/problem/1233
s1, s2, s3 = list(map(int, input().split(" ")))

result = [0] * (s1 + s2 + s3 + 1)

for rs1 in range(1, s1+1) :
    for rs2 in range(1, s2+1) :
        for rs3 in range(1, s3+1) :
            result[rs1+rs2+rs3] += 1

max_value = max(result)
for i in range(1, len(result)+1) :
    if result[i] == max_value :
        print(i)
        break
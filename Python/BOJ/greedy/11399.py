n = int(input())
times = list(map(int, input().split(" ")))

times.sort()

result = 0

for i, t in enumerate(times) :
    result += (n-i) * t

print(result)
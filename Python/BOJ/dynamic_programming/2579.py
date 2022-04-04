import sys

def scanf() :
    return sys.stdin.readline().rstrip()

n = int(scanf())

dp = [0] * n
scores = []

for _ in range(n) :
    scores.append(int(scanf()))

dp[0] = scores[0]

if n > 1 :
    dp[1] = dp[0] + scores[1]
if n > 2 :
    dp[2] = max(dp[0] + scores[2], scores[1] + scores[2])

for i in range(3, n) :
    dp[i] = max(dp[i-2] + scores[i], dp[i-3] + scores[i-1] + scores[i])

print(dp[-1])
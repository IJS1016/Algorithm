import sys

def scanf() :
    return sys.stdin.readline().rstrip()

n = int(scanf())

dp = [x-1 for x in range(n+1)]

for x in range(1, n+1) :
    if x % 2 == 0 and dp[x] > dp[x//2] + 1: 
        dp[x] = dp[x//2] + 1

    if x % 3 == 0 and dp[x] > dp[x//3] + 1: 
        dp[x] = dp[x//3] + 1

    if dp[x] > dp[x-1] + 1 :
        dp[x] = dp[x-1] + 1 

print(dp[n])
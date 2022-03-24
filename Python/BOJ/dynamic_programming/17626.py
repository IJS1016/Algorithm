# 17626 : Four Squares
# https://www.acmicpc.net/problem/17626
n = int(input())

dp = [x for x in range(0, n+1)]

for x in range(2, n+1) :
    if (x ** 0.5) % 1 == 0 :
        dp[x] = 1

    else :
        for i in range(1, int(x**0.5)+1) :
            dp[x] = min(dp[x], dp[x-i*i]+1)
            
            if dp[x] == 2 :
                break

print(dp[n])
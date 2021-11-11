# 1225 이상한 곱셈
# https://www.acmicpc.net/problem/1225
nums = input().split(" ")

num1 = list(map(int, list(nums[0])))
num2 = list(map(int, list(nums[1])))

if len(num1) > len(num2) :
    num_sum = sum(num1) 
    num_mul = num2
else :
    num_sum = sum(num2)
    num_mul = num1

result = 0

for n in num_mul :
    result += num_sum * n

print(result)
import sys

def scanf() :
    return sys.stdin.readline().rstrip()

def find_num_of_power(num) :
    cnt = 0

    while (num >= 5) :
        if (num % 5 == 0) :
            num = num / 5
            cnt += 1
        else :
            return cnt

    return cnt


n = int(scanf())
result = 0

for i in range(1, n+1) :
    result += find_num_of_power(i)

print(result)
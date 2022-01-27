import sys

n = int(sys.stdin.readline())

divisors = sys.stdin.readline()[:-1].split(" ")

divisors = list(map(int, divisors))

divisors.sort()

print(divisors[0] * divisors[-1])

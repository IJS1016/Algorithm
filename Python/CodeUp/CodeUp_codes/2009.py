#! /bin/python3.6
k, n = map(int, input().split(" "))

coffe = 0

while (k >= n) :
    #print(coffe, k, n)
    changed_coffe = k // n
    coffe += changed_coffe
    k = k % n + changed_coffe

print(coffe)
#print(n)

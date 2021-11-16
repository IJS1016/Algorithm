# HAVE TO SOLVE
n1, n2 = input().split(" ")
flag = 0
result = ""

if n1 < n2 :
    n1, n2 = n2, n1

for i in range(len(n2)) :
    n1_int = int(n1[-i])
    n2_int = int(n2[-i])

    tmp_sum = n1_int + n2_int + flag

    if tmp_sum % 2 == 0 :
        result += '0'
    else :
        result += '1'

    if tmp_sum > 2 :
        flag = 1
    else :
        flag = 0

result = str(n1)[:-len(n2)] + result[::-1]

print(result)
        
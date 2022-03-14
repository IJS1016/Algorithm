import sys

def scanf() :
    return sys.stdin.readline().rstrip()

num, question = scanf().split(" ")

ordered_list = []
pocketmon_dict = {}


for i in range(int(num)) :
    pocketmon = scanf()

    ordered_list.append(pocketmon)
    pocketmon_dict[pocketmon] = i + 1


for _ in range(int(question)) :
    q = scanf()

    if q.isnumeric() :
        print(ordered_list[int(q)-1])
    
    else :
        print(pocketmon_dict[q])
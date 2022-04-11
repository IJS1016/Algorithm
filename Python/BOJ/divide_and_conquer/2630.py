import sys

num_papers = [0, 0]

def scanf() :
    return sys.stdin.readline().rstrip()

def nested_list_sum(l) :
    result = 0
    for i in l :
        result += sum(i)
    return result

def split_paper(color_paper) :
    length = len(color_paper)

    sum_color_paper = nested_list_sum(color_paper)

    if sum_color_paper == 0 :
        num_papers[0] += 1

    elif sum_color_paper == length * length :
        num_papers[1] += 1

    else :
        l_2 = length // 2
        up_paper = color_paper[:l_2]
        down_paper = color_paper[l_2:]

        up_l_paper = []
        up_r_paper = []
        down_l_paper = []
        down_r_paper = []

        for i in range(l_2) :
            up_l_paper.append(up_paper[i][:l_2])
            up_r_paper.append(up_paper[i][l_2:])
            down_l_paper.append(down_paper[i][:l_2])
            down_r_paper.append(down_paper[i][l_2:])

        split_paper(up_l_paper)
        split_paper(up_r_paper)
        split_paper(down_l_paper)
        split_paper(down_r_paper)


n = int(scanf())
color_paper = [list(map(int, scanf().split())) for i in range(n)]
split_paper(color_paper)

print(num_papers[0])
print(num_papers[1])
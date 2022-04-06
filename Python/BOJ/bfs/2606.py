# bfs, dfs로도 풀어보기
import sys

def scanf() :
    return sys.stdin.readline().rstrip()

computer = scanf()
n = int(scanf())

connect_infos = []

for _ in range(n) :
    flag = -1
    new_connect = scanf().split(" ")

    for i in range(len(connect_infos)) :
        if flag == -1 and (new_connect[0] in connect_infos[i] or new_connect[1] in connect_infos[i]) :
            connect_infos[i] = connect_infos[i].union(new_connect)
            flag = i
        
        elif flag != -1 and (new_connect[0] in connect_infos[i] or new_connect[1] in connect_infos[i]) : 
            connect_infos[flag] = connect_infos[flag].union(connect_infos[i])
            connect_infos.pop(i)
            break

    if flag == -1 :
        connect_infos.append(set(new_connect))

for i in range(len(connect_infos)) :
    if '1' in connect_infos[i] :
        print(len(connect_infos[i])-1)
        exit()
print(0)
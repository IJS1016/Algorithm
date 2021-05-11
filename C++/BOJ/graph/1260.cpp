#include <iostream>

using namespace std;

int main(void){
    int n_node, n_line, v;

    std::cin>>n_node>>n_line>>v;

    const int N_NODE=n_node, N_LINE=n_line;

    int graph[N_LINE][2];

    for (int i=0; i < N_LINE; i++){
        std::cin>>graph[i][0]>>graph[i][1];
    }

    int dfs[N_NODE], bfs[N_NODE];

    std::cout<<N_NODE<<"\n"<<sizeof(dfs)<<" ";

    // dfs + history 검사 해야함
    int now_point = v, cnt=1, hist[N_NODE];

    while (cnt != N_NODE){
        for (int i=0; i < N_LINE; i++){
            int flag = 0;
            if (graph[i][0]==now_point){
                for (int j=0; j < N_NODE; j++){
                    if (hist[j] == graph[i][1]){
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0){
                    now_point = graph[i][1];
                    dfs[cnt] = now_point;
                    cnt += 1;
                    break;
                }
            }

            else if (graph[i][1]==now_point){
                for (int j=0; j < N_NODE; j++){
                    if (hist[j] == graph[i][0]){
                        flag = 1;
                        break;
                    }
                }
                if (flag == 0){
                    now_point = graph[i][0];
                    dfs[cnt] = now_point;
                    cnt += 1;
                    break;
                }
            }
        }
    }
    
    /*
    // bfs
    int now_point = v, cnt=1;

    while (cnt != N_NODE){
        for (int i=0; i < N_LINE; i++){
            if (graph[i][0]==now_point){
                now_point = graph[i][1];
                dfs[cnt] = now_point;
                cnt += 1;
            }
            else if (graph[i][1]==now_point){
                now_point = graph[i][0];
                dfs[cnt] = now_point;
                cnt += 1;
            }
        }
    }
    */
    for (int i=0; i < sizeof(dfs); i++){
        std::cout<<dfs[i]<<" ";
    }

}
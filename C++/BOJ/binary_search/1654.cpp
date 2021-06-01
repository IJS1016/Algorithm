#include <iostream>
#include <algorithm>

using namespace std;


/* 랜선 자르기 https://www.acmicpc.net/problem/1654
첫번째 풀이 : 시간 초과 -> 이진탐색 방법 공부하고 이용해보기 */



'''
//첫번쨰 풀이 -> 시간초과
int main(void){
    int b_n, a_n, lines[10000];

    // input parameters
    std::cin>>b_n>>a_n;
    
    for (int i=0; i<b_n; i++){
        std::cin>>lines[i];
    }

    int cnt = a_n - b_n;
    int cut[10000]={0, }, split_line[10000];
    int longest, shorest_after_cut = -1, max_idx;
    copy(lines, lines+b_n, split_line);


    while (cnt > 0){
        while (cnt > 0) {
            max_idx = 0;
            longest = lines[0] / (cut[0]+2);

            for (int i=1; i<b_n; i++){
                if (longest < (lines[i] / (cut[i]+2))){
                    longest = (lines[i] / (cut[i]+2));
                    max_idx = i;
                }
            }

            cut[max_idx] += 1;
            split_line[max_idx] = lines[max_idx] / (cut[max_idx]+1);

            cnt -= 1;
        }

        shorest_after_cut = -1;

        for (int i=0; i<b_n; i++){
            if (cut[i] != 0) {
                if (shorest_after_cut == -1){
                    shorest_after_cut = (split_line[i]/(cut[i]+2));
                }
                else if (shorest_after_cut > (split_line[i]/(cut[i]+2)) ){
                    shorest_after_cut = (split_line[i]/(cut[i]+2));
                }
            }
        }

        for (int i=0; i<b_n; i++){
            if (cut[i] == 0) {
                if (lines[i] < shorest_after_cut){
                    for (int j=i; j<b_n; j++){
                        split_line[i] = split_line[i+1];
                    }
                    b_n -= 1;
                    cnt += 1;
                }
            }
        }
    }

    std::cout<<*min_element(split_line, split_line+b_n);
}
'''
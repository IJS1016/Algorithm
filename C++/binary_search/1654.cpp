#include <iostream>

using namespace std;


/* https://www.acmicpc.net/problem/1654 
다른 방법 생각해보기
너무 짧은 줄 있을 때 제외해줘야함

다른 방법 : max 줄 확인하면서 계속 슬라이스
글구 그 중 min 값이 1개짜리다? 그럼 한번 더 자르고 비교해서 버리기
 */

int main(void){
    int b_n, a_n;
    int lines[10000];
    int total_len=0, line_num=0;
    
    // input parameters
    std::cin>>b_n>>a_n;
    
    for (int i=0; i<b_n; i++){
        std::cin>>lines[i];
        total_len += lines[i];
    }

    int standard_len = total_len / a_n;              // 자르는데 기준이 되는 길이
    int split_num[10000], after_split_lines[10000];; // 각 자른 개수, 자른 길이

    for (int i=0; i<b_n; i++){
        std::cout<<lines[i]<<" "<<lines[i] / standard_len<<"\n";
        split_num[i] = lines[i] / standard_len;
        line_num += split_num[i];
        after_split_lines[i] = standard_len;
    }    


    int min_len;

    for (int cnt = line_num; cnt < a_n; cnt++){
        std::cout<<"CNT "<<cnt<<"\n";

        int max_len = after_split_lines[0], max_idx=0;

        for (int i=1; i<b_n; i++){
            if (max_len < after_split_lines[i]){
                max_len = after_split_lines[i];
                max_idx = i;
            }
        }

        split_num[max_idx] += 1;

        for (int i=0; i<b_n; i++){
            after_split_lines[i] = lines[i] / split_num[i];
        }    
    }

    min_len = after_split_lines[0];

    for (int i=1; i < b_n; i++){
        if (min_len > after_split_lines[i]) {
            min_len = after_split_lines[i];
        }
    }

    for 

    std::cout<<min_len<<"\n";
}
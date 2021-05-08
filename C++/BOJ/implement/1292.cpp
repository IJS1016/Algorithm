#include <iostream>

using namespace std;

/* 쉽게 푸는 문제 https://www.acmicpc.net/problem/1292 */

int main(void){
    int start, end, result=0;
    std::cin>>start>>end;

    int start_num_idx = 1, start_small_idx = start;

    while (start_small_idx > start_num_idx){
        start_small_idx -= start_num_idx;
        start_num_idx += 1;
    }

    int end_num_idx = start_num_idx, end_small_idx = end - start + start_small_idx;

    while (end_small_idx > end_num_idx){
        end_small_idx -= end_num_idx;
        end_num_idx += 1;
    }

    while (start_num_idx != end_num_idx){
            result += start_num_idx * (start_num_idx - start_small_idx + 1);
            start_num_idx += 1;
            start_small_idx = 1;
    }
    
    result += (end_small_idx - start_small_idx + 1) * start_num_idx;

    std::cout<<result<<"\n";
}
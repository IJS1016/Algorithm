#include <iostream>

/* 나무자르기 https://www.acmicpc.net/problem/2805 
    10퍼에서 틀림 -> 마지막 total_lenght보다 작은지 조건을 줌으로서 해결*/

int main(void) {
    int n, m;
    int lengths[1000000]={0, }, max_length=0;

    scanf("%d %d", &n, &m);

    for (int i=0; i<n; i++){
        scanf("%d", &lengths[i]);

        if (max_length < lengths[i]){
            max_length = lengths[i];
        } 
    }

    long long start=0, end=max_length, mid = max_length / 2;
    long long total_lengths=0;

    while (start < end) {
        total_lengths=0;

        for (int i=0; i<n; i++){
            if (lengths[i] - mid > 0){
                total_lengths += lengths[i] - mid;
                if (total_lengths > m) {
                    break;
                }
            }
        } 

        if (total_lengths > m) {
            start = mid+1;
        }
        else if (total_lengths < m) {
            end   = mid-1;
        }
        else {
            printf("%lld\n", mid);
            return 0;
        }
        mid = (start + end) / 2;
    }

    total_lengths = 0;

    for (int i=0; i<n; i++){
        if (lengths[i] - mid > 0){
            total_lengths += lengths[i] - mid;
        }
    }
    if (total_lengths < m) {    
        printf("%lld\n", mid-1);
    }
    else {
        printf("%lld\n", mid);
    }

    return 0;

}
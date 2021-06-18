#include <iostream>
#include <algorithm>

/* 통계학  https://www.acmicpc.net/problem/2108
합 범위 값(long long & double) 및 반올림 .0f로 사용 */

int main(void) {
    long long n, middle = 0, range;
    double element_sum=0;
    int array[500001]  = {0,};

    scanf("%lld", &n);

    for (int i=0; i<n; i++){    
        scanf("%d", &array[i]);
        
        element_sum += array[i];
    }

    std::sort(array, array+n);

    middle = array[n/2];
    range  = array[n-1] - array[0];

    int check = array[0], mode_array[8001]={array[0], }, mode_idx = 0, cnt=1, max_cnt=1;

    for (int i=1; i<n; i++){    
        if (check == array[i])  {
            cnt += 1;
        }

        else if (cnt == max_cnt) {
            mode_array[mode_idx]  = check;
            mode_idx += 1;

            check = array[i];
            cnt     = 1;
        }

        else if (cnt > max_cnt) {
            mode_idx = 0;
            mode_array[mode_idx]  = check;
            mode_idx += 1;

            check = array[i];

            max_cnt = cnt;
            cnt     = 1;
        }

        else {
            check = array[i];
            cnt     = 1;
        }
    }

    if (cnt == max_cnt) {
        mode_array[mode_idx]  = check;
        mode_idx += 1;
    }

    else if (cnt > max_cnt) {
        mode_idx = 0;
        mode_array[mode_idx]  = check;
        mode_idx += 1;

        max_cnt = cnt;
    }

    printf("%.0f\n", element_sum / (double)n);

    printf("%lld\n", middle);

    if (mode_idx > 1) {
        printf("%d\n", mode_array[1]);
    }
    else {
        printf("%d\n", mode_array[0]);
    }

    printf("%lld\n", range);

}


#include <iostream>
#include <algorithm>

/* 문제 다시 풀기 
https://www.acmicpc.net/problem/2108
mode 값 다시 생각해서 풀이
*/

int main(void) {
    int n, element_sum = 0, middle = 0, range;
    int array[500000] = {0,};

    scanf("%d", &n);

    for (int i=0; i<n; i++){    
        scanf("%d", &array[i]);
        
        element_sum += array[i];
    }

    std::sort(array, array+n);

    middle = array[n/2];
    range = array[n-1] - array[0];

    int check = array[0], mode_array[8000]={array[0], }, mode_idx = 0, cnt=1, max_cnt=1;

    for (int i=1; i<n; i++){    
        if (check == array[i]) {
            cnt += 1;
        }

        else if (cnt == max_cnt) {
            mode_idx += 1;

            check = array[i];
            mode_array[mode_idx]  = array[i-1];
            cnt     = 1;
        }
        else if (cnt > max_cnt) {
            mode_idx = 0;
            check = array[i];

            mode_array[mode_idx]  = array[i-1];

            max_cnt = cnt;
            cnt     = 1;
        }

        else {
            check = array[i];
            cnt     = 1;
        }
    }

    printf("ELEMENT SUM %d\nIDEX %d\n", element_sum, mode_idx);


    if (element_sum < 0 && element_sum % n != 0) {    
        printf("%d\n", element_sum / n - 1);
    }
    else {
        printf("%d\n", element_sum / n);
    }

    printf("%d\n", middle);

    if (mode_idx > 1) {
        printf("%d\n", mode_array[1]);
    }
    else {
        printf("%d\n", mode_array[0]);
    }

    printf("%d\n", range);

}


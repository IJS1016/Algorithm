#include <iostream>
#include <algorithm>

/* 덩치 https://www.acmicpc.net/problem/7568 */

int main(void) {
    int n, h, w;
    int info[50][2];

    scanf("%d", &n);


    for (int i=0; i<n; i++){
        scanf("%d %d", &info[i][0], &info[i][1]);
    }

    int rank=1;
    for (int i=0; i<n; i++){
        rank=1;
        for (int j=0; j<n; j++){
            if ((info[i][0] < info[j][0]) and (info[i][1] < info[j][1])) {
                rank += 1;
            }
        }
        printf("%d ", rank);
    }
    

}
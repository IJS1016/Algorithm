#include <iostream>
#include <climits>

/* 마인크래프트 https://www.acmicpc.net/problem/18111 */


int main(void) {
    int n, m, b;
    int max_h=0, min_h=256;
    int ground[500][500];

    scanf("%d %d %d", &n, &m, &b);

    for (int i=0; i < n; i++) {
        for (int j=0; j < m; j++) {
            scanf("%d", &ground[i][j]);

            if (max_h < ground[i][j]) {
                max_h = ground[i][j];
            }
            if (min_h > ground[i][j]) {
                min_h = ground[i][j];
            }       
        }
    }


    int min_time = INT_MAX, result_h;
    int tmp_b, tmp_time;

    for (int h=min_h; h <= max_h; h++) {
        RESTART:
        if (h > max_h) {
            break;
        }
        tmp_b = b;
        tmp_time = 0;

        for (int i=0; i < n; i++) {
            for (int j=0; j < m; j++) {
                if (ground[i][j] > h) {
                    int x = ground[i][j]-h;
                    tmp_b    += 1 * x;
                    tmp_time += 2 * x;
                }
            }
            if (tmp_time > min_time) {
                h++;
                goto RESTART;
            }
        }

        for (int i=0; i < n; i++) {
            for (int j=0; j < m; j++) {
                if (ground[i][j] < h) {
                    int x = h - ground[i][j];
                    tmp_b    -= 1 * x;
                    tmp_time += 1 * x;
                }
            }
            if (tmp_b < 0 or tmp_time > min_time) {
                h++;
                goto RESTART;
            }
        }
        min_time = tmp_time;
        result_h = h;
    }
    
    printf("%d %d\n", min_time, result_h);
    return 0;
}
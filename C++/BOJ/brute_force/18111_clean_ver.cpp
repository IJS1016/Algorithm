#include <iostream>
#include <climits>

/* *clean ver* 마인크래프트 https://www.acmicpc.net/problem/18111
   1차원 배열 사용 */


int main(void) {
    int n, m, b;
    int max_h = 0, min_h = 256;
    int ground[250000];

    scanf("%d %d %d", &n, &m, &b);

    for (int i=0; i < n * m; i++) {
        scanf("%d", &ground[i]);

        if (max_h < ground[i]) {
            max_h = ground[i];
        }
        if (min_h > ground[i]) {
            min_h = ground[i];
        }       
    }

    int min_time = INT_MAX, result_h;
    int tmp_b, tmp_time;

    for (int h = min_h; h <= max_h; h++) {
        tmp_b    = b;
        tmp_time = 0;

        for (int i=0; i < n * m; i++) {
            int x = ground[i] - h;

            tmp_b    += x;

            if (x > 0) {
                tmp_time += 2 * x;
            }
            else {
                tmp_time -= x;
            }
            
            if (tmp_time > min_time) {
                break;
            }
        }

        if (tmp_b < 0 or tmp_time > min_time) {
            break;
        }

        min_time = tmp_time;
        result_h = h;
    }
    
    printf("%d %d\n", min_time, result_h);
    return 0;
}
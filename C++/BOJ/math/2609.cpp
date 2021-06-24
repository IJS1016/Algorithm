#include <iostream>

/* 최대공약수와 최소공배수 https://www.acmicpc.net/problem/2609 */

int main(void) {
    int n, m, gcm=1, lcm=1;

    scanf("%d %d", &n, &m);

    for (int d=2; n + m > 2; d++){
        int n_d_cnt=0, m_d_cnt=0, min_cnt, max_cnt;

        while (n % d == 0) {
            n = n / d;
            n_d_cnt += 1;
        }
        
        while (m % d == 0) {
            m = m / d;
            m_d_cnt += 1;
        }

        if (n_d_cnt <= m_d_cnt) {
            min_cnt = n_d_cnt;
            max_cnt = m_d_cnt;
        }
        else {
            min_cnt = m_d_cnt;
            max_cnt = n_d_cnt;
        }

        //printf("d %d %d %d\n", d, n_d_cnt, m_d_cnt);

        for (; min_cnt > 0; min_cnt--){
            gcm *= d;
        }
        for (; max_cnt > 0; max_cnt--){
            lcm *= d;
        }
    }


    printf("%d\n%d", gcm, lcm);
}
#include <iostream>

/* 이항계수 https://www.acmicpc.net/problem/11050 */

int main(void) {
    int n, k, result = 1;

    scanf("%d %d", &n, &k);

    for (int i = n; i > n-k; i--) {
        result *= i;
    }
    for (int i = 1; i <= k; i++) {
        result /= i;
    }
    printf("%d", result);

    return 0;
}
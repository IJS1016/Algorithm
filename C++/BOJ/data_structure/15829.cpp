#include <iostream>

/* Hasing https://www.acmicpc.net/problem/15829 
Hard set도 맞아야함 */

int main(void) {
    int len, result=0, int_s;
    long long x=1;
    char s;

    scanf("%d", &len);
    getchar();

    for (int i = 0; i < len; i++){
        scanf("%c", &s);
        // printf("%c\n\n", s);

        int y = 1;
 
        result = (result + ((s-'a'+1) * x)) % 1234567891;
        x = x * 31;
    }

    printf("%d\n", result);
}
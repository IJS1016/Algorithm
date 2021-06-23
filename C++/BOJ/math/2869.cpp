#include <iostream>
#include <cmath>

/* 달팽이는 올라가고 싶다. https://www.acmicpc.net/problem/2869 */

int main(void){
    int a, b, v, day = 1;

    scanf("%d %d %d", &a, &b, &v);

    v = v - a;
    a = a - b;

    day += int(ceil(double(v) / double(a)));

    printf("%d\n", day);

}
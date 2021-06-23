#include <iostream>
#include <cmath>

int main(void){
    int a, b, v, day = 1;

    scanf("%d %d %d", &a, &b, &v);

    v = v - a;
    a = a - b;

    day += int(ceil(double(v) / double(a)));

    printf("%d\n", day);

}
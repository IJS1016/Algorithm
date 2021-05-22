#include <iostream>

using namespace std;

/* 구구단 https://www.acmicpc.net/problem/2739 */

int main(void){
    int n;

    std::cin>>n;

    for (int i=1; i<9; i++){
        printf("%d * %d = %d\n", n, i, (n*i));
    }
    printf("%d * %d = %d", n, 9, (n*9));
}
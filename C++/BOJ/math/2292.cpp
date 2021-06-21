#include <iostream>

/* 벌집 https://www.acmicpc.net/problem/2292 */

int main(void){
    int n;

    std::cin>>n;

    if (n==1){
        std::cout<<"1\n";
        return 0;
    }

    int i = 1;

    n = n - 1;
    while (n > 0) {
        n = n - 6 * i;
        i += 1;
    }

    std::cout<<i<<"\n";

    return 0;
}
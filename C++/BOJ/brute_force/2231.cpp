#include <iostream>

/* 분해합 https://www.acmicpc.net/problem/2231 */

int main(void) {
    int n, m;

    std::cin>>n;

    int tmp=n, check_n, digits=0, plus=0;

    while (tmp > 0){
        tmp = tmp / 10; 
        digits += 1;
    }


    while (plus < digits * 9){
        m = n - digits * 9 + plus;
        tmp     = m;
        check_n = m;

        while (tmp > 0) {
            if (check_n > n){
                break;
            }
            check_n += tmp % 10;
            tmp = tmp / 10;
        }

        if (check_n == n){
            std::cout<<m<<"\n";
            return 0;
        }

        plus += 1;
    }

    std::cout<<"0\n";   

    return 0;
}
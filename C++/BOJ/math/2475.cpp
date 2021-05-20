#include <iostream>

using namespace std;

/* 검증수 https://www.acmicpc.net/problem/2475 */

int main(void){
    int num, result = 0;

    for (int i=0; i<5; i++){
        std::cin>>num;
        result += num *  num;
    }

    std::cout<<result % 10;
}
#include <iostream>

using namespace std;

/* 윤년 https://www.acmicpc.net/problem/2753 */

int main(void){
    int year;

    std::cin>>year;

    if (year % 4 == 0 && year % 100 != 0) {
        std::cout<<1;
    }

    else if (year % 400 == 0) {
        std::cout<<1;
    }

    else {
        std::cout<<0;
    }
}
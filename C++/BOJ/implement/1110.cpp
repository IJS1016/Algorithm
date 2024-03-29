#include <iostream>

using namespace std;

/* 더하기 사이클 https://www.acmicpc.net/problem/1110 */

int main(void){

    int original, x=-1, x_10, x_1, cnt=0;

    std::cin>>original;

    x_10 = original / 10;
    x_1  = original % 10;

    while (original!=x){
        x = x_1 * 10 + ((x_10 + x_1) % 10);

        x_10 = x / 10;
        x_1  = x % 10;
        
        cnt += 1;
    }
    std::cout<<cnt;

}
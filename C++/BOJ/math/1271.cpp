#include <iostream>
#include <cstring>
using namespace std;

/* 엄청난 부자2 https://www.acmicpc.net/problem/1271
c++로 직접 구현 overflow 발생 -> string으로 연산이 필요 */

int main(void){
    string money, person;

    std::cin>>money>>person;

    std::cout<<money/person<<"\n"<<money%person;

    return 0;
}
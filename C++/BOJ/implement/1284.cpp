#include <iostream>

using namespace std;

/* 집 주소 https://www.acmicpc.net/problem/1284
while (input != 0)에서 조건이 아니라도, while loop를 돌고 끝남으로 0인 경우에도 출력된 것이 오답의 원인
*/

int main(void){
    int input=1;

    while (1) {
        std::cin>>input;
        if (input == 0) {
            return 0;
        }

        int tmp = input, num, result = 1;

        while (tmp > 0) {
            num = tmp % 10;
            tmp = tmp / 10;

            if (num == 1){
                result += 3;
            }
            else if (num == 0){
                result += 5;
            }
            else {
                result += 4;
            }
        }
        std::cout<<result<<"\n";
    }
}
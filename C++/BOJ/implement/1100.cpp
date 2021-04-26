#include <iostream>

using namespace std;

/* 하얀 칸 https://www.acmicpc.net/problem/1100
오답 char를 비교할 때 'F' 같이 작은 따음표를 사용해야한다.
문자열일 때 ""를 사용하고, 문자 하나일 때 ''를 사용하면 된다.
*/

int main(void){
    char lines[8][8];
    int cnt = 0;

    for (int i = 0; i < 8; i++){
        std::cin>>lines[i];
    }

    for (int i = 0; i < 8; i++){
        int start = i % 2;
        for (int j = start; j < 8; j=j+2){
            if (lines[i][j]=='F'){
                cnt += 1;
            }

        }
    }
    std::cout<<cnt<<"\n";
}
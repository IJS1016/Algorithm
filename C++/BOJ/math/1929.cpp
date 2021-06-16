#include <iostream>

/* 1929 소수 https://www.acmicpc.net/problem/1929
            오 이 방법이 에라토스테네스의 체이구나 */

int array[1000001];

int main(void){
    int m, n; //, cnt=2;

    std::cin>>m>>n;

    for (int i=1; i<=n; i++){
        array[i] = i;
    }

    for (int cnt=2; cnt <= n; cnt++){        
        if (array[cnt] != 0) {
            if (cnt >= m){
                std::cout<<array[cnt]<<"\n";
            }
            for (int i=cnt; i <= n; i += cnt){
                array[i] = 0;
            }
        }
    }
}

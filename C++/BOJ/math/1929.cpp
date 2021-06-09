#include <iostream>

/* 너무 큰 배열*/

int array[1000001];

int main(void){
    int m, n; //, cnt=2;

    std::cin>>m>>n;

    for (int i=1; i<=n; i++){
        array[i] = i;
    }

    //std::cout<<n<<"\n\n";

    for (int cnt=2; cnt <= n; cnt++){
        //std::cout<<cnt<<"\n\n";
        if (array[cnt] != 0) {
            if (cnt >= m){
                std::cout<<array[cnt]<<"\n";
            }
            for (int i=cnt; i <= n; i += cnt){
                array[cnt + i] = 0;
            }
        }
    }
}

#include <iostream>

/* 카드2 https://www.acmicpc.net/problem/2164 */

int main(void) {
    int n, array[500001]={0,}, cnt=0;

    std::cin>>n;

    for (int i=1; i<=n; i++){
        array[i]=i;
    }

    int save=0, idx=0;

    while (cnt < n){
        if ((save == 0) && (array[idx] != 0)) {
            array[idx] = 0;
            save = 1;
            cnt += 1;
        }

        else if ((save == 1) && (array[idx] != 0)) {
            save = 0;
        }
        idx = (idx + 1) % (n + 1);
    }
    if (idx == 0) {
        std::cout<<n<<"\n";
    }

    else {
        std::cout<<idx-1<<"\n";
    }
}
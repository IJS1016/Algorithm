#include <iostream>
using namespace std;

/* 별 찍기-2 */

int main(void){
    int n;

    std::cin>>n;

    for (int i=1; i<=n; i++){
        for (int j=0; j < n; j++){
            if (j < (n-i)){
                std::cout<<' ';
            }
            else {
                std::cout<<'*';
            }
        }

        if (i != n){
            std::cout<<"\n";
        }
    }
}
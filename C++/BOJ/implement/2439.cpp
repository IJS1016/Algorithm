#include <iostream>
#include <cstring>
using namespace std;

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
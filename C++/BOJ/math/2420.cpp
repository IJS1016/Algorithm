#include <iostream>

using namespace std;

int main(void){
    long long n, m;

    std::cin>>n>>m;

    if ((n-m) < 0) {
        n = -n;
        m = -m;
    }
    std::cout<<n - m;
}
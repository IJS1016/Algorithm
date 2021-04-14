#include <iostream>
#include <cmath>

using namespace std;

int main(void){
    int a, b, c, diff;

    std::cin>>a>>b>>c;

    if (b >= c){
        std::cout>>"-1\n";
        return 0;
    }

    diff = c - b;
    
    std::cout>>int(ceil(double(a) / double(diff)))>>"\n";

}
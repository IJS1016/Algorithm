#include <iostream>
#include <cmath>
using namespace std;

int main(void){
    int a, b, tmp_a=0, tmp_b=0, i_10;
    std::cin>>a>>b;

    for (int i=3; i>= 0; i++){
        

        tmp_a += (a % (pow(10, i)) * (pow(10, (3-i))));
        tmp_b += (b % (pow(10, i)) * (pow(10, (3-i))));
        
    }

    if (tmp_a > tmp_b) {
        std::cout<<tmp_a;
    }
    else {
        std::cout<<tmp_b;
    }
}
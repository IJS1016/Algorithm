#include <iostream>
using namespace std;

//overflow에 대해서 생각하는 것이 중요

int main(void){
    long long int result=0, overflow=0;
    int n;

    std::cin>>n;

    for (int i=0; i < n; i++){
        long long int tmp;
        std::cin>>tmp;

        if (result > 0 and tmp > 0 and result + tmp <= 0) {
            //result = result + tmp - LLONG_MIN;
            overflow += 1;
        }

        if (result < 0 and tmp < 0 and result + tmp >= 0) {
            //result = result + tmp - LLONG_MAX;
            overflow -= 1;
        }

        result += tmp;
    }

    if (overflow < 0){
        std::cout<<'-';
    }
    else if (overflow > 0){
        std::cout<<'+';
    }
    else if (result==0){
        std::cout<<result;
    }
    else if (result < 0){
        std::cout<<'-';
    }
    if (result > 0){
        std::cout<<'+';
    }
}
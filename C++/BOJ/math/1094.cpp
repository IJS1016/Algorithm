#include <iostream>

using namespace std;

int main(void){
    int l = 64, x, cnt=0;

    std::cin>>x;

    while (x != 0){
        if (l <= x){
            cnt += 1;
            x = x - l;
        }
        l = l / 2;∑
    }
    std::cout<<cnt;
}
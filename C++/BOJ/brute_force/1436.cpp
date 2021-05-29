#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    int n;

    std::cin>>n;

    for (int i=666; n > 0; i++){
        if (to_string(i).find("666") != string::npos) {
            n -= 1;
            if (n == 0){
                std::cout<<i;
            }
        }
    }
}
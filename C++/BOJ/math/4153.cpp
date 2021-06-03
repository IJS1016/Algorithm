#include <iostream>
#include <algorithm>

using namespace std;

int main(void){
    int len[3];

    while(1) {
        std::cin>>len[0]>>len[1]>>len[2];
        sort(len, len+3);

        if (len[2] == 0) {
            return 0;
        }
        
        if ((len[2]*len[2]) == (len[0]*len[0]+len[1]*len[1])){
            std::cout<<"right\n";
        }
        else {
            std::cout<<"wrong\n";
        }
    }
    return 0;
}
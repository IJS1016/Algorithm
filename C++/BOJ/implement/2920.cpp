#include <iostream>
using namespace std;

/* 음계 https://www.acmicpc.net/problem/2920 */

int main(void){
    int song[8], opt=0;

    for (int i=0; i<8; i++){
        std::cin>>song[i];
    }

    for (int i=0; i<7; i++){
        //std::cout<<song[i]<<song[i+1]<<"\n";
        if (song[i] < song[i+1]) {
            if (opt == 0 or opt==1) {
                opt = 1;
                //std::cout<<"opt1\n";
            }
            else {
                opt = -1;
                break;
            }
        }
        else if (song[i] > song[i+1]) {
            if (opt == 0 or opt== 2) {
                opt = 2;
                //std::cout<<"opt2\n";
            }
            else {
                opt = -1;
                break;
            }
        }
        else {
            opt = -1;
            break;
        }
    }

    if (opt == -1) {
        std::cout<<"mixed";
    }
    else if (opt == 1) {
        std::cout<<"ascending";
    }
    else {
        std::cout<<"descending";
    }
}
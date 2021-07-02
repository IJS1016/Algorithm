#include <iostream>

/* ACM 호텔 https://www.acmicpc.net/problem/10250 */

int main(void){
    int t;

    std::cin>>t;

    int h, w, n;

    for (int i=0; i<t; i++){
        std::cin>>h>>w>>n;

        int floor = n % h;
        int room_num = n / h;

        if (floor == 0) {
            std::cout<<h*100+room_num<<"\n";
        }

        else {
            std::cout<<floor*100+room_num+1<<"\n";
        }        
    }

}
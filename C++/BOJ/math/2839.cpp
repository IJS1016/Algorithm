#include <iostream>

int main(void){
    int n, divide=1, bag3 = -1;

    std::cin>>n;

    while (divide > 0){
        bag3 += 1;
        divide = (n - 3 * bag3) % 5;
    }
    if (divide == 0) {
        std::cout<<bag3 + (n - 3 * bag3) / 5; 
    }
    else {
        std::cout<<-1;
    }
}
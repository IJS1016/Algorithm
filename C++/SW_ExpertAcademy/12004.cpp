#include <iostream>

using namespace std;

/* 구구단 1 ttps://swexpertacademy.com/main/solvingProblem/solvingProblem.do */

int main(void){
    int n;
    std::cin>>n;

    for (int i=1; i<10; i++){
        if (n % i == 0 and n / i < 10) {
            std::cout<<"Yes";
            return 0;
        }
    }

    std::cout<<"NO";
    return 0;

}

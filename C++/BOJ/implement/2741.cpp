#include <iostream>
using namespace std;

/* N 찍기 https://www.acmicpc.net/problem/2741 */

int main(void){
    int n;

    std::cin>>n;

    for (int i=1; i<n+1; i++){
        printf("%d\n", i);
    }
}
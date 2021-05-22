#include <iostream>
using namespace std;

/* 기찍 N https://www.acmicpc.net/problem/2742 */

int main(void){
    int n;

    std::cin>>n;

    for (int i=n; i>0; i--){
        printf("%d\n", i);
    }
}
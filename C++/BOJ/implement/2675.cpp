#include <iostream>
#include <cstring>

using namespace std;

/* 문자열 반복 https://www.acmicpc.net/problem/2675 */

int main(void){
    int n, repeat;

    std::cin>>n;

    for (int i=0; i<n; i++){
        string word;

        std::cin>>repeat>>word;

        for (int j=0; j<word.length(); j++){
            for (int k=0; k<repeat; k++){
                std::cout<<word[j];
            }
        }
        if (i != n-1){
            std::cout<<"\n";
        }
    }
}
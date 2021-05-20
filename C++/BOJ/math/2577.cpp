#include <iostream>
#include <cstring>

using namespace std;

/* 숫자의 개수 https://www.acmicpc.net/problem/2577 */

int main(void){
    int a, b, c, results[10] = {0,};
    char numbers[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

    std::cin>>a>>b>>c;

    string str_result = std::to_string(a * b * c);

    for (int i=0; i<str_result.length(); i++){
        for (int j=0; j<10; j++){
            if (str_result[i] == numbers[j]){
                results[j] += 1;
                break;
            }
        }   
    }
    for (int i=0; i<9; i++){
        std::cout<<results[i]<<"\n";
    }
    std::cout<<results[9];
}
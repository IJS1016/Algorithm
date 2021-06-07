#include <iostream>

using namespace std;

/* https://www.acmicpc.net/problem/10773
1의 자리수가 아닌 경우 수정이 필요 */

int main(void){
    int k, idx=0;
    long long result=0;

    char stack[100002], tmp;

    std::cin>>k;

    for (; k>0; k--){
        std::cin>>tmp;
        if (tmp == '0'){
            idx -= 1;
        }
        else {
            stack[idx] = tmp;
            idx += 1;
        }
        for (int i=0; i<idx; i++){
            std::cout<<stack[i]<<" ";
        }
        std::cout<<"\n";
    }

    for (int i=0; i<idx; i++){
        result += int(stack[i]) -'0';
    }
    std::cout<<result;
}
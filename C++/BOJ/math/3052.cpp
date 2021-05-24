#include <iostream>

using namespace std;

int main(void){
    int num, result=0, flag=1, r_idx=0;
    int remainder[10]={-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};

    for (int i=0; i<10; i++){
        std::cin>>num;

        for (int j=0; j<10; j++){
            if (remainder[j] == (num % 42)){
                flag = 0;
                break;
            }
        }
        remainder[r_idx] = num % 42;
        r_idx += 1;
        
        result += flag;
        flag = 1;
    }

    std::cout<<result;
}
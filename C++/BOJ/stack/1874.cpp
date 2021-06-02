#include <iostream>

using namespace std;

int main(void){
    int  n, ridx=0, iidx=0, stack_len=0;
    int  integers[100000]={0,}, stack[100000]={0,};
    char results[100000];

    std::cin>>n;

    for (int i=0; i<n; i++){
        std::cin>>integers[i];
    }

    for (int i=1; i<=n; i++){
        // push -> results에다 + 저장
        results[ridx] = '+';
        ridx += 1;

        // push element of stack
        // std::cout<<"\nPUSH "<<i<<"\n";
        for (int j = stack_len; j > 0; j--){
            stack[j] = stack[j-1];
        }
        stack[0]   = i;
        stack_len += 1;

        // pop (stack[0]과 integer와 비교해서 같다면, integer_idx + 1)
        //      -> results에다 - 저장
        //      -> while 문으로 연속 되게 설정
        while (stack[0] == integers[iidx] and iidx < n){
            results[ridx] = '-';
            ridx += 1;
            
            // pop element of stack
            // std::cout<<"\nPOP "<<stack[0]<<"\n";
            for (int j=0; j < stack_len; j++){
                stack[j] = stack[j+1];
            }
            stack_len -= 1;
            iidx += 1;
        }
    }
    
    // NO인 경우 stack이 빈 배열이 X
    if (stack[0] == 0) {
        for (int i=0; i < ridx-1; i++){
            std::cout<<results[i]<<"\n";
        }
        std::cout<<results[ridx-1];
    }
    else {
        std::cout<<"NO";
    }

    return 0;   
}
#include <iostream>
#include <cstring>
using namespace std;

/*HAVE TO SOLVE
1 4 5 0 0 일 때 5가 사라지는 경우 -> n이 업데이트 하기 전 나눠져서 0이 출력
그렇다고 n을 항상 업데이트하면 X
오답 -> n을 업데이트 후 idx가 n을 넘으면 또 다시 나머지를 구해줌

코드 다듬기 및 Runtime error 수정*/

int main(void){
    int n, k, idx=0, cnt=0;

    std::cin>>n>>k;

    int array[n];

    for (int i=0; i<n; i++){
        array[i] = i+1;
    }

    idx = (k % n) - 1 ;

    std::cout<<"<"<<array[idx];
    array[idx] = 0;

    while (n > 0){
        if ((idx + k) / n > 0){
            idx = (idx + k) % n;

            for (int i=0; i<n; i++){
                if (array[i]==0){
                    memmove(array+i, array+i+1, (n-i) * sizeof(int));
                    n -= 1;
                    i -= 1;
                }
            }

            if (idx >= n) {
                idx = idx % n;
            }
        }

        else {
            idx += k;
        }

        if (array[idx] == 0){
            break;
        }

        std::cout<<", "<<array[idx];
        array[idx] = 0;
    }

    std::cout<<">";
}

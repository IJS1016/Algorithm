#include <iostream>

using namespace std;

/* 부녀회장이 될테야 https://www.acmicpc.net/problem/2775 */

int main(void){
    int test_case, k, n;

    std::cin>>test_case;

    for (int i=0; i<test_case; i++){
        std::cin>>k>>n;

        int resident[14];
        
        for (int j=0; j<n; j++){
            resident[j]=j+1;
        }

        while (k>0){
            for (int l=n-1; l>=0; l--){
                for (int m=0; m<l; m++){
                    resident[l] += resident[m];
                }
            }
            k--;
        }
        std::cout<<resident[n-1]<<"\n";
    }
}
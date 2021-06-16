#include <iostream>

/* 1978 소수 찾기 https://www.acmicpc.net/problem/1978 */

int main(void) {
    int n, max=0, cnt=0; 
    int nums[100];
    int prime_array[1001]={0,};

    std::cin>>n;

    for (int i=0; i<n; i++){
        std::cin>>nums[i];
        if (nums[i] > max) {
            max = nums[i];
        }
    }

    for (int i=2; i<=max; i++){
        prime_array[i] = i;
    }

    for (int cnt=2; cnt <= max; cnt++){        
        if (prime_array[cnt] != 0) {
            for (int i=cnt+cnt; i <= max; i += cnt){
                prime_array[i] = 0;
            }
        }
    }

    for (int i=0; i<n; i++){
        if (prime_array[nums[i]] != 0) {
            cnt += 1;
        }
    }
    std::cout<<cnt;


}
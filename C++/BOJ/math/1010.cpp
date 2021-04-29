#include <iostream>

using namespace std;

/* 다리 놓기 https://www.acmicpc.net/problem/1010ff*/

long long factorial(long long n){
    long long result=1;

    if (n == 0){
        return 1;
    }

    for (int i = 1; i <= n; i++){
        result *= i;
    }
    return result;
}

long long part_factorial(long long m, long long n){
    long long result=1;

    for (int i = m; i > n; i--){
        result *= i;
    }
    return result;
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int case_num;

    std::cin>>case_num;

    for (int i = 0; i < case_num; i++){
        long long n, m, result = 1;

        std::cin>>n>>m;

        if ((m-n) > n){
            result = part_factorial(m, (m-n));
            result /= factorial(n);
        }
        else {
            result = part_factorial(m, n);   
            result /= factorial(m-n);
        }

        std::cout<<result<<"\n";
    }
}

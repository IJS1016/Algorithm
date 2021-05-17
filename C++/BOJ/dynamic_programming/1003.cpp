#include <iostream>

using namespace std;

int zero_cnt, one_cnt;

int fibonacci(int n) {
    if (n == 0) {
        zero_cnt += 1;
        return 0;
    } else if (n == 1) {
        one_cnt += 1;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(void){
    int n, test_case;

    std::cin>>n;

    for (int i=0; i<n; i++){
        zero_cnt = 0;
        one_cnt  = 0;

        scanf("%d", &test_case);

        fibonacci(test_case);

        printf("%d %d\n", zero_cnt, one_cnt);
    }

}


#include <iostream>

using namespace std;

/* 피보나치 함수 1003
시간초과 -> 각 피보나치 함수가 재귀로 돌지 않고 f(n) -> f(n-1), f(n-2)로 중복 되는 것들 계산 하지 않도록 하기
오답 : 전의 결과와 현재 결과를 더하는 규칙과 cnt1의 직전 값이 cnt0라는 규칙을 이용해 풀이. 
*/

int print_cnt_num(int n){
    int cnt0 = 1, cnt1 = 0, tmp;

    while (n > 0) {
        tmp = cnt1;
        cnt1 = cnt0 + cnt1;
        cnt0 = tmp;
        n -= 1;
    }

    printf("%d %d\n", cnt0, cnt1);
    return 0;
}


int main(void){
    int n, test_case;

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%d", &test_case);
        print_cnt_num(test_case);
    }
}


#include <iostream>

using namespace std;

/* 별찍기-1
-----------------------------------------------
문제
-----------------------------------------------
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

-----------------------------------------------
입력
-----------------------------------------------
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.

-----------------------------------------------
출력
-----------------------------------------------
첫째 줄부터 N번째 줄까지 차례대로 별을 출력한다.

-----------------------------------------------
예제 입력 1 
-----------------------------------------------
5
-----------------------------------------------
예제 출력 1 
-----------------------------------------------
*
**
***
****
*****

*/


int main(void){
    int n;

    std::cin>>n;

    string star="";

    for (int i=1; i<n+1; i++){
        star.append("*");

        if (i == n){
            std::cout << star;
        }
        else {
            std::cout << star << "\n";
        }
    }

}
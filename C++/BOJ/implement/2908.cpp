#include <iostream>
#include <cstring>
using namespace std;

/* 상수 https://www.acmicpc.net/problem/2908 */
// char를 선언해 풀이한 경우
// std::cin>>a>>b;를 사용하면 a를 받아오지 못한다, 하지마 b, a 순으로 변경하면 잘 된다 왜??

int main(void){
    string a, b, tmp_a="000", tmp_b = "000";


    std::cin>>a>>b;

    for (int i=0; i<3; i++){
        tmp_a[i] = a[2-i];
        tmp_b[i] = b[2-i];
    }

    if (stoi(tmp_a) > stoi(tmp_b)) {
        std::cout<<tmp_a;
    }
    else {
        std::cout<<tmp_b;
    }
}

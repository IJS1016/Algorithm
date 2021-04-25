#include <iostream>
#include <cmath>
using namespace std;

/* 핸드폰 요금 https://www.acmicpc.net/problem/1267
오답 : 범위를 잘 확인하기 (0~29, 30~59)
      자연수 입력인 경우 0은 고려안해도 됨
*/

int main(void){
    int n, y_cost = 0, m_cost = 0;

    std::cin>>n;

    for (int i = 0; i < n ; i++){
        double call_time;

        std::cin>>call_time;

        call_time += 1;
        y_cost += int(ceil(call_time / 30.0) * 10);
        m_cost += int(ceil(call_time / 60.0) * 15);
        //std::cout<<y_cost<<" "<<m_cost<<"\n";
    }

    if (y_cost < m_cost) {
        std::cout<<"Y "<<y_cost;
    }

    else if (y_cost > m_cost) {
        std::cout<<"M "<<m_cost;
    }
    
    else {
        std::cout<<"Y M "<<y_cost;
    }
}
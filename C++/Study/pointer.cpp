#include <iostream>

using namespace std;

int main(void){
    int n = 10;
    int *nPtr;

    nPtr = &n; // n의 메모리 주소를 포인터 변수에 저장

    std::cout<<"*nPtr : "<<*nPtr<<"\n"; // 포인터 앞에 *를 붙임으로서 해당 메모리에 저장된 값을 가져옴
    std::cout<<"n     : "<<n<<"\n";
    
    //std::cout<<"&n    : "<<&n<<"\n";    // n 변수 주소값을 나타냄  
    
    *nPtr = 20;

    std::cout<<"*nPtr : "<<*nPtr<<"\n";
}
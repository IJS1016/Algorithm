#include <iostream>
#include <cstring>
using namespace std;



/* longlong int로 표현할 수 없는 너무 큰 수의 경우
string으로 승부를 본다
string을 또 쪼개서 int로 만든 다음 제곱한다
더하는거 해결해야 함*/



string squared(string n){
    // unsigned long long 20 : 0 ~ 18,446,744,073,709,551,615
    // 9 자리수로 끊어서 계산 -> 20자리 미만으로 나누기
    // 9 * 1 -> 10
    // stoull
    int split = 3;
    long long multi;
    int n_size = n.length();
    string result;
    int int_result;

    std::cout<<n<<"\n"<<n_size<<"\n";

    for (int i=0; i <n_size; i += split){
        // 끊어서 곱한 뒤에 더 해주기
        // 더하는 함수도 만들어야겠는걸?
        for (int j=n_size-1; j >= 0; j--){
            // multi = stoi(n, &n+i, 10) * stoi(n, &n+j, 10);
            multi = stoi(n.substr(i, split)) * stoi(n.substr(j, 1));
            std::cout<<"i "<<i<<" "<<i+split<<", j "<<j<<"\n";
            std::cout<<"MULTI "<<stoi(n.substr(i, split))<<" * "<<stoi(n.substr(j, 1))<<"\n";

            string zeros;
            int range = (n_size-(i+split));
            if (range < 0){
                range=0;
            }

            std::cout<<"I : "<<(n_size-(i+split))<<" J : "<<(n_size-j-1)<<"\n";
            //for (int k=0; k < (n_size-(i+split))+(n_size-j-1); k++){
            for (int k=0; k < (range)+(n_size-j-1); k++){
                zeros += '0';
                multi = multi * 10;
            }

            int_result += multi;
            std::cout<<"MUL "<<multi<<"\n\n";
            //result += to_string(multi) + zeros; 
            //std::cout<<to_string(multi) + zeros<<"\n";
       
       }
    }
    std::cout<<int_result<<"\n";

    return "Dfsf";
}

int main(void){
    string n;
    std::cin>>n;

    squared(n);

    std::cout<<"RESULT "<<stoi(n) * stoi(n);
    // std::cout<<n<<"\n";

    // std::cout<<n[4]<<"\n";

    // 문자로 하기


    //std::cout<<sqrt(n)<<"\n\n";

    // start = 1;
    // end   = n;
    // mid = (start + end) / 2;

    // while (mid * mid != n){
    //     std::cout<<mid<<"\n";
    //     if (mid * mid > n){
    //         end   = mid - 1;
    //     }
    //     else {
    //         start = mid + 1;
    //     }
    //     mid = (start + end) / 2;
    // }

    // std::cout<<mid;
    return 0;
}
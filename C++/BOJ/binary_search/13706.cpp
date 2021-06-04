#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;



/* longlong int로 표현할 수 없는 너무 큰 수의 경우
string으로 승부를 본다
string을 또 쪼개서 int로 만든 다음 제곱한다
더하는거 해결해야 함*/

// str_sum reminder 올림한 경우 생각해야 함 
string str_sum(string a, string b){
    int min_len, temp=0;
    string remainder, result;
    
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int a_len = a.length(), b_len = b.length();
    //std::cout<<"LEN "<<a_len<<" "<<b_len<<" "<<remainder.length()<<"\n";

    if (a_len <= b_len) {
        min_len = a_len;
        remainder = b.substr(a_len, b_len-a_len);
    }
    else {
        min_len = b_len;
        remainder = a.substr(b_len, a_len-b_len);
    }

    for (int i=0; i<min_len; i++){
        std::cout<<"I"<<i<<"\n";
        temp += a[i] + b[i] - '0' * 2;
        if (temp < 0) {
            temp = 0;
        }
        std::cout<<"TEMP "<<temp<<"  a,b "<<a[i]<<" "<<b[i]<<"\n";

        result += to_string(temp % 10);
        std::cout<<"TEMP0 "<<to_string(temp % 10)<<" result : "<<result<<"\n\n";

        if (temp / 10 > 0){
            temp = 1;
        }
        else {
            temp = 0;
        }
    }


    if (temp == 1){
        if (remainder.length() != 0) {
            int digit_up = int(remainder[0]) - int('0') + 1;
            remainder = to_string(digit_up) + remainder.substr(1, remainder.length()-1);
        }
        else {
            remainder += '1';
        }
    }

    result += remainder;
    reverse(result.begin(), result.end());
    return result;
}

string squared(string n){
    string result="0", smulti, zeros;
    int split = 3, multi, n_size = n.length(), int_result;
 
    std::cout<<n<<"\n"<<n_size<<"\n";

    for (int i=0; i <n_size; i += split){ // 끊어서 곱한 뒤에 더 해주기
        for (int j=n_size-1; j >= 0; j--){
            if (i + split > n_size) {
                multi = stoi(n.substr(i, i + split - n_size)) * stoi(n.substr(j, 1));
            }
            else {
                multi = stoi(n.substr(i, split)) * stoi(n.substr(j, 1));
            }
            std::cout<<"i "<<i<<" "<<i+split<<", j "<<j<<"\n";
            std::cout<<"MULTI "<<stoi(n.substr(i, split))<<" * "<<stoi(n.substr(j, 1))<<"\n";

            int range = (n_size-(i+split));

            if (range < 0){
                range = 0;
            }

            std::cout<<"I : "<<(n_size-(i+split))<<" J : "<<(n_size-j-1)<<"\n";
            for (int k = 0; k < (range)+(n_size-j-1); k++){
                //zeros += '0';
                multi = multi * 10;
            }

            smulti = to_string(multi) + zeros;

            std::cout<<"STRSUM INPUT "<<result<<" "<<smulti<<"\n\n";

            result = str_sum(result, smulti);

            int_result += multi;
            std::cout<<"RESULT "<<result<<"\n";
            std::cout<<"INT "<<int_result<<"\n\n";
       }
    }
    std::cout<<int_result<<"\n";

    return "Dfsf";
}

int main(void){
    string n;
    std::cin>>n;

    // 이진탐색
    squared(n);

    return 0;
}
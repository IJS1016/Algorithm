#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;



/* longlong int로 표현할 수 없는 너무 큰 수의 경우
string으로 승부를 본다
string을 또 쪼개서 int로 만든 다음 제곱한다
더하는거 해결해야 함*/

string str_sum(string a, string b){
    // 더하는 거 걍 1의 자리수로 졸라게 더하기 그게 쉬울듯 아무리 많이 돌아도
    int split = 3;
    int temp=0, max_len;
    string stemp, result, zeros;

    int a_len = a.length(), b_len = b.length();

    if (a_len > b_len) {
        max_len = a_len;
    }
    else {
        max_len = b_len;
    }
    std::cout<<"STR_SUM "<<a<<" "<<b<<"\n";

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    for (int i=0; i <max_len; i+=split){
        zeros = "";
        std::cout<<"FOR "<<a.substr(i, i+split)<<" "<<b.substr(i, i+split)<<"\n";
        if (a_len < i){
            result += b.substr(i, b_len-i);
            break;
        }
        else if (b_len < i){
            result += a.substr(i, a_len-i);
            break;
        }

        temp += stoi(a.substr(i, i+split) + b.substr(i, i+split));
        stemp = to_string(temp);

        reverse(stemp.begin(), stemp.end());

        std::cout<<"STEMP "<<stemp<<"\n";

        if (stemp.length() > split) {
            result += stemp.substr(1, stemp.length());
            temp = 1;
        }
        else if (stemp.length() < split) {
            for (int j=0; j<split-stemp.length(); j++){
                zeros += '0';
            }
            result += stemp + zeros;
        }
        else {
            result += stemp;
        }
    }

    reverse(result.begin(), result.end());
    std::cout<<"RESULT "<<result<<"\n";


    return result;
}

string squared(string n){
    """큰 수 제곱하는 함수 using string"""
    string result="0", smulti, zeros;
    int split = 3, multi, n_size = n.length(), int_result;
 
    std::cout<<n<<"\n"<<n_size<<"\n";

    for (int i=0; i <n_size; i += split){ // 끊어서 곱한 뒤에 더 해주기
        for (int j=n_size-1; j >= 0; j--){
            multi = stoi(n.substr(i, split)) * stoi(n.substr(j, 1));
            // std::cout<<"i "<<i<<" "<<i+split<<", j "<<j<<"\n";
            // std::cout<<"MULTI "<<stoi(n.substr(i, split))<<" * "<<stoi(n.substr(j, 1))<<"\n";

            int range = (n_size-(i+split));

            if (range < 0){
                range = 0;
            }

            // std::cout<<"I : "<<(n_size-(i+split))<<" J : "<<(n_size-j-1)<<"\n";
            for (int k=0; k < (range)+(n_size-j-1); k++){
                zeros += '0';
                multi = multi * 10;
            }

            smulti = to_string(multi) + zeros;

            std::cout<<"STRSUM INPUT "<<result<<" "<<smulti<<"\n\n";

            result = str_sum(result, smulti);

            int_result += multi;
            std::cout<<"MUL "<<multi<<"\n\n";
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
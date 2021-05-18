#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

/* 단어공부 https://www.acmicpc.net/problem/1157 */

int main(void){
    string stat;
    int alphabet[26]={0}, idx;

    std::cin>>stat;

    for (int i=0; i < stat.length(); i++){
        idx = toupper(stat[i]) - 'A';
        alphabet[idx] += 1;
    }

    int *max_address = max_element(alphabet, alphabet+26);
    int max = *max_address;
    int max_idx = max_address - alphabet;

    //std::cout<<max_address<<" "<<max<<" "<<max_idx<<"\n";

    for (int i=0; i < 26; i++){
        if (i == max_idx){
            continue;
        }

        if (alphabet[i] == max) {
            std::cout<<"?";
            return 0;
        }
    }
    std::cout<<(char)(max_idx + 'A');
}
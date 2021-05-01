#include <iostream>

using namespace std;

/*뒤집기 - https://www.acmicpc.net/problem/1439
*/
int main(void){
    int S_LEN = 1000000;
    char s[S_LEN];

    std::cin>>s;

    for (int i=0; i < S_LEN; i++){
        std::cout<<s[i];
        if (s[i] == NULL){
            break;
        }
    }

}
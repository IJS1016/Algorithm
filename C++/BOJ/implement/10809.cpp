#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    string word;
    int cnt_alpha[26];

    for (int i=0; i<26; i++){
        cnt_alpha[i] = -1;
    }

    std::cin>>word;

    for (int i=0; i<word.length(); i++){
        for (int j=97; j<123; j++){
            if (j == word[i] && cnt_alpha[j-97]==-1) {
                cnt_alpha[j-97] = i;
                break;
            }
        }
    }
    for (int i=0; i<26; i++){
        std::cout<<cnt_alpha[i]<<" ";
    }
}
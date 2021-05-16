#include <iostream>
#include <cstring>
using namespace std;

int main(void){
    int cnt = 0;
    string sentence;

    getline(cin, sentence);

    if (((sentence[0] == ' ') and (sentence.length() == 1)) or sentence.length() == 0) {
        std::cout<<0;
        return 0;
    }

    for (int i=1; i<sentence.length()-1; i++){
        if (sentence[i] ==  ' ') {
            cnt += 1;
        }
    }
    std::cout<<cnt+1;
}
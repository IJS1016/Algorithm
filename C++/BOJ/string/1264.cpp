#include <iostream>
#include <string>

using namespace std;

int main(void){
    char vowels[10] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

    while(1){
        int cnt=0;
        string s;
        getline(cin, s);

        if (s == "#"){
            break;
        }
        for (int i=0; i<s.size(); i++){
            for (int j=0; j<10; j++){
                if (s[i] == vowels[j]){
                    cnt += 1;
                }
            }
        }
        std::cout<<cnt<<"\n";
    }
}
#include <iostream>

using namespace std;
int main(void){
    int n;

    std::cin>>n;

    char fn[n][51];

    for (int i=0;i<n;i++){
        std::cin>>fn[i];
    }

    int len=strlen(fn[0]);
    char result[len];

    for (int i=0;i<len;i++){
        char tmp = fn[0][i];
        for (int j=1;j<n;j++){
            if (tmp != fn[j][i]){
                result[i]='?';
                break;
            }
        }
        if (result[i] != '?'){
            result[i]=tmp;
        }
    }

    for (int i=0;i<len;i++){
        std::cout<<result[i];
    }
}
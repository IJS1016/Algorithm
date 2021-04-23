#include <iostream>

using namespace std;

int main(void){
    //ios::sync_with_stdio(false);
    //cin.tie(NULL);
    //cout.tie(NULL);

    int n;

    std::cin>>n;

    char words[n][50], word[50];

    for (int i=0; i < n; i++){
        int flag = 0;
        std::cin>>word;


        //for (int k=0; k<i; k++){
        //    std::cout<<words[k]<<" ";
        //}

        //std::cout<<"\n"<<i<<" "<<n<<" "<<word<<"\n";

        for (int j=0; j < i; j++){
            if (strcmp(words[j], word)==0){
                //std::cout<<"STRCMP "<<words[j]<<" "<<word<<"\n";
                flag = 1;
                i = i-1;
                n = n-1;
                break;
            }
        }
        if (flag == 0){
            strcpy(words[i], word);
        }
    }

    for (int i = 0; i < n; i++){
        char temp[50];
        for (int j=0; j < n-i; j++){
            if (strlen(words[j]) > strlen(words[j+1])){
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
        }
    }

    for (int i=0; i <= n; i++){
        std::cout<<words[i]<<"\n";
    }
}

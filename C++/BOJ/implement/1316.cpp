#include <iostream>
#include <string>

using namespace std;

int main(void){
    int n, cnt=0;

    std::cin>>n;

    for (int i=0; i<n; i++){
        char word[100], word_not_overlap[100]="";
        int idx = 1, flag = 0;

        std::cin>>word;

        word_not_overlap[0] = word[0];


        //std::cout<<"S"<<word<<" "<<flag<<"\n";
        // 중복 제거
        for (int j=1; j<strlen(word); j++){
            if (word[j-1]!=word[j]){
                word_not_overlap[idx] = word[j];
                idx += 1;
            }
        }

        for (int j=0; j<strlen(word_not_overlap); j++){
            if (flag==1){
                break;
            }
            for (int k=0; k < j; k++){
                if (word_not_overlap[k]==word_not_overlap[j]){
                    flag = 1;
                    break;
                }
            }
        }

        //std::cout<<"LEN "<<strlen(word)<<" "<<strlen(word_not_overlap)<<"\n";
        //std::cout<<"A"<<word<<" "<<flag<<"\n";

        if (flag == 0){
            cnt += 1;
        }
    }

    std::cout<<cnt<<"\n";
}
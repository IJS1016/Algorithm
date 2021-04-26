#include <iostream>
#include <cstring>
using namespace std;


/* HAVE TO SOLVE
문제 : 중간에 이상한 단어가 포함 되서 나옴
OutOfBound Error*/

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    std::cin>>n;

    char words[n][51], word[51];

    // get words except overlap words
    for (int i=0; i < n; i++){
        int flag = 0;
        std::cin>>word;

        for (int j=0; j < i; j++){
            if (!strcmp(words[j], word)){
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

    // sort words
    for (int i = 0; i < n; i++){
        char temp[51];

        for (int j=0; j < n-i; j++){
            if (strlen(words[j]) > strlen(words[j+1])){
                strcpy(temp, words[j]);
                strcpy(words[j], words[j+1]);
                strcpy(words[j+1], temp);
            }
            if (strlen(words[j]) == strlen(words[j+1])){
                int word_length = strlen(words[j]);

                for (int k = 0; k < word_length; k++){
                    if (words[j][k] < words[j+1][k]){
                        break;
                    }
                    if (words[j][k] > words[j+1][k]){
                        strcpy(temp, words[j]);
                        strcpy(words[j], words[j+1]);
                        strcpy(words[j+1], temp);
                        break;
                    }
                }
            }
        }
    }

    for (int i=0; i <= n; i++){
        std::cout<<words[i]<<"\n";
    }
}

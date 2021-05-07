#include <iostream>
#include <cstring>

using namespace std;


/* 그룹단어체커 https://www.acmicpc.net/problem/1316
오답 : 루프 돌 때마다 배열 초기화 안 해주면 그 전 배열의 정보가 남아있음
      쓰지 않는 변수, 배열은 선언하지 않기
      strlen 사용하는 경우 cstring 반드시 선언하기
*/
int main(void){
    int n, cnt=0;

    std::cin>>n;

    for (int i=0; i<n; i++){
        char word[100], word_not_overlap[100]="";
        int idx = 1, flag = 0;

        std::cin>>word;

        word_not_overlap[0] = word[0];

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

        if (flag == 0){
            cnt += 1;
        }
    }

    std::cout<<cnt<<"\n";
}
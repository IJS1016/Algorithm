#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


/* HAVE TO SOLVE
문제 : 중간에 이상한 단어가 포함 되서 나옴 -> 단어 선언 개수 때문에
OutOfBound Error
-> 오답 : sort시에 j 범위 잘 못 설정(max(j+1)=n+1로 OutofBound)

210506 코드는 돌지만 시간초과
-> 오답 : sort 방법 공부 & 변경 해보기

210509 알고리즘 풀이 때 sort 함수를 사용하는 것이 좋음
string이 길이를 동적할당하지만, strcmp와 같은 함수를 사용하지 않아도 되서 직관적
string 길이 a.length()

sort 함수 사용법을 익혔다
comp에 sort 하는 조건들을 넣으면 쉽게 sort가 가능하다!

드디어 풀었네...

*/
bool comp(string a, string b){
    if (a.length() == b.length()){
        return a < b;
    }
    else {
        return a.length() < b.length();
    }
}

int main(void){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;

    std::cin>>n;

    string words[n+1], word;

    // get words except overlap words
    for (int i = 0; i < n; i++){
        int flag = 0;

        std::cin>>word;

        for (int j = 0; j < i; j++){
            if (words[j] == word){
                flag = 1;
                i = i-1;
                n = n-1;
                break;
            }
        }
        if (flag == 0){
            words[i] =  word;
        }
    }

    sort(words, words+n, comp);

    for (int i=0; i < n; i++){
        std::cout<<words[i]<<"\n";
    }
}

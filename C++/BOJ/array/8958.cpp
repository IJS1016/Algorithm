#include <iostream>

using namespace std;

/* OX 퀴즈
문제
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다. 문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다. 예를 들어, 10번 문제의 점수는 3이 된다.

"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.

OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수가 주어진다. 각 테스트 케이스는 한 줄로 이루어져 있고, 길이가 0보다 크고 80보다 작은 문자열이 주어진다. 문자열은 O와 X만으로 이루어져 있다.

출력
각 테스트 케이스마다 점수를 출력한다.*/

// 배운 점
// char 배열 선언과 cin을 사용해 string을 받을 수 있다.
// char일 때 ==를 이용해 문자를 비교할 수 있다.
// tmp[j] != NULL로 공백 문자인지 아닌지 확인할 수 있다. (포인터를 붙이라는 Warning이 발생하지만, pointer를 붙이면 에러가 발생)

int main(void){
    char tmp[81];
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        std::cin>>tmp;

        int total = 0, score = 0;

        for (int j=0; tmp[j] != NULL; j++){
            if (tmp[j] == 'O') {
                score += 1;
                total += score;
            }
            else {
                score = 0;
            }
        }
        printf("%d\n", total);
    }

}
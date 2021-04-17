#include <iostream>

using namespace std;

/*분산처리 https://www.acmicpc.net/problem/1009
문제
재용이는 최신 컴퓨터 10대를 가지고 있다. 어느 날 재용이는 많은 데이터를 처리해야 될 일이 생겨서 각 컴퓨터에 1번부터 10번까지의 번호를 부여하고, 10대의 컴퓨터가 다음과 같은 방법으로 데이터들을 처리하기로 하였다.

1번 데이터는 1번 컴퓨터, 2번 데이터는 2번 컴퓨터, 3번 데이터는 3번 컴퓨터, ... ,

10번 데이터는 10번 컴퓨터, 11번 데이터는 1번 컴퓨터, 12번 데이터는 2번 컴퓨터, ...

총 데이터의 개수는 항상 ab개의 형태로 주어진다. 재용이는 문득 마지막 데이터가 처리될 컴퓨터의 번호가 궁금해졌다. 이를 수행해주는 프로그램을 작성하라.

입력
입력의 첫 줄에는 테스트 케이스의 개수 T가 주어진다. 그 다음 줄부터 각각의 테스트 케이스에 대해 정수 a와 b가 주어진다. (1 ≤ a < 100, 1 ≤ b < 1,000,000)

출력
각 테스트 케이스에 대해 마지막 데이터가 처리되는 컴퓨터의 번호를 출력한다.*/

int main(void){
    int n;
    
    // test cases
    std::cin >> n;

    for (int i=0; i < n; i++){
        int a, b, arr[5];
        std::cin >> a >> b;

        if (a % 10 == 0) {
            a = 10;
        }
        else {
            a = a % 10;
        }
        
        int tmp = a, loop = -1;

        arr[0] = a;

        for (int j = 1; j < b; j++) {
            tmp = (tmp * a) % 10;  
            if (tmp == 0) {
                tmp = 10;
            }

            if (tmp == a) {
                loop = j;
                break;
            }
            arr[j] = tmp;
        }
        
        if (loop == -1) { 
            std::cout << tmp << "\n";
        }
        else {
            std::cout << arr[(b-1) % loop] << "\n";
        }
    }
}
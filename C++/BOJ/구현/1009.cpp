#include <iostream>

using namespace std;

/* 수정하기 및 코드 줄이기*/

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
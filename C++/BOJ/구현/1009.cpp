#include <iostream>
#include <cmath>

using namespace std;

/* 수정하기 및 코드 줄이기*/

int main(void){
    int n, a, b, tmp, arr[5] = {1, };
    std::cin >> n;

    for (int i=0; i < n; i++){
        std::cin >> a >> b;
        
        int tmp = a, loop = 1;

        if (b == 0) {
            std::cout << "1\n";
        }

        arr[1] = a;

        for (int j = 2; j <= b; j++) {
            tmp = (tmp * a) % 10;
            arr[j] = tmp;

            if (tmp == (a % 10)) {
                loop = j - 1;
                break;
            }
        }
        if (loop == -1) { 
            std::cout << tmp << "\n";
        }
        else if (loop == 1) { 
            std::cout << arr[1] << "\n";
        }
        else {
            std::cout << arr[b % loop] << "\n";
        }
    }
}
#include <iostream>

/* 수 정렬하기 3 https://www.acmicpc.net/problem/10989  */

int main() {
    int n, num;
    int array[10000]={0, };

    scanf("%d", &n);

    for (int i=0; i < n; i++) {
        scanf("%d", &num);
        array[num-1] += 1;
    }

    for (int i=0; i < 10000; i++) {
        while (array[i] > 0) {
            printf("%d\n", i+1);
            array[i] -= 1;
        }
    }

    return 0;

}

/* max_num 을 이용해서 가장 큰 값까지 출력해주면 '출력오류'가 발생 */

// int main() {
//     int n, num, max_num;
//     int array[10000]={0, };

//     scanf("%d", &n);

//     for (int i=0; i < n; i++) {
//         scanf("%d", &num);
//         array[num-1] += 1;

//         if (num > max_num) {
//             max_num = num;
//         }
//     }

//     for (int i=0; i < max_num; i++) {
//         while (array[i] > 0) {
//             printf("%d\n", i+1);
//             array[i] -= 1;
//         }
//     }

//     return 0;

// }
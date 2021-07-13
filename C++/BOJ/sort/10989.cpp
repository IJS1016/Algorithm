#include <iostream>
#include <algorithm>

/* 수 정렬하기 3 https://www.acmicpc.net/problem/10989 
    메모리 초과 */

int nums[10000000];

int main() {
    int n;

    scanf("%d", &n);

    for (int i=0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    std::sort(nums, nums+n);

    for (int i=0; i < n; i++) {
        printf("%d\n", nums[i]);
    }

    return 0;

}


#include <map>
// int main() {
//     int n;
//     int nums_no_overlap[10000], idx=0;


//     scanf("%d", &n);

//     for (int i=0; i < n; i++) {
//         int flag = 0;

//         scanf("%d", &nums[i]);
        
//         for (int j=0; j < idx; j++) {
//             if (nums_no_overlap[j] == nums[i]) {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0) {
//             nums_no_overlap[idx] = nums[i];
//             idx += 1;
//         }
//     }

//     std::sort(nums_no_overlap, nums_no_overlap+idx);
//     std::map<int, int> dict;

//     for (int i=0; i < idx; i++) {
//         printf("\n sorted %d", nums_no_overlap[i]);
//         dict[nums_no_overlap[i]] = i+1;
//     }
//     printf("\n\n\n\n");

//     for (int i=0; i < n; i++) {
//         printf("%d\n", dict[nums[i]]);
//     }

//     return 0;

// }
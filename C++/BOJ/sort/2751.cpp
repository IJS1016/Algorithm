#include <iostream>
#include <algorithm>

/* 수 정렬하기2 https://www.acmicpc.net/problem/2751 */

int nums[10000000];

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%d", &nums[i]);
    }

    std::sort(nums, nums+n);

    for (int i=0; i<n; i++){
        printf("%d\n", nums[i]);
    }

    return 0;
}
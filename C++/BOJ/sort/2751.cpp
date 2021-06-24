#include <iostream>
#include <algorithm>

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
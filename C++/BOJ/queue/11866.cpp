#include <iostream>

int main(void) {
    int n, k, cnt=0;
    int result[1000]={};

    scanf("%d %d", &n, &k);

    for (int i=0; i<n; i++) {
        result[i] = i+1;
    }

    int idx = -1;

    printf("<");

    while (cnt < n) {
        int i = 0;
        while (i < k){   
            idx = (idx + 1) % n;     
            if (result[idx] == 0) {
                continue;
            }
            i += 1;
        }
        if (cnt == n-1) {
            printf("%d>\n", result[idx]);
            return 0;
        }
        else {
            printf("%d, ", result[idx]);
        }
        result[idx] = 0;
        cnt += 1;
    }
}
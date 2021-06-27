#include <iostream>
#include <algorithm>

bool comp(int a, int b) {
    return a > b;
}
int main(void) {
    int n, m;
    int cards[100];

    scanf("%d %d", &n, &m);

    for (int i=0; i<n; i++){
        scanf("%d", &cards[i]);
    }

    std::sort(cards, cards+n, comp);

    int tmp_sum = 0, tmp_sum2 = 0, result = 0;

    for (int i=0; i < n-2; i++){
        if (cards[i] > m) {
            continue;
        }
        tmp_sum = cards[i];

        for (int j=i+1; j < n-1; j++){
            if (tmp_sum + cards[j] > m) {
                continue;
            }
            else {
                tmp_sum2 = tmp_sum + cards[j];

                for (int k=j+1; k < n; k++){
                    if (tmp_sum2 + cards[k] > m) {
                        continue;
                    }
                    else {
                        if (result < tmp_sum2 + cards[k]) {
                            result = tmp_sum2 + cards[k];
                        }
                    }
                }
            }
        }
    }

    printf("%d", result);
}
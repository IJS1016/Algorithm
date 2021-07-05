#include <iostream>
#include <map>

/* 숫자카드 2 https://www.acmicpc.net/problem/10816 */

int main(void) {
    int n, card, num;

    std::map<int, int> cards;

    scanf("%d", &n);

    for (int i=0; i < n; i++) {
        scanf("%d", &card);
        cards[card] += 1;
    }

    scanf("%d", &n);

    for (int i=0; i < n; i++) {
        scanf("%d", &num);
        printf("%d ", cards[num]);
    }

    return 0;
}
#include <iostream>
#include <algorithm>
#include <vector>

/* 좌표 정렬하기 1 https://www.acmicpc.net/problem/11651 */

using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
    if (a.second < b.second) {
        return true;
    }

    else if (a.second == b.second) {
        if (a.first < b.first) {
            return true;
        }
    }

    return false;
}

int main(void) {
    int n;

    vector<pair<int, int> > vectors;

    scanf("%d", &n);

    int a, b;

    for (int i=0; i < n; i++){
        scanf("%d %d", &a, &b);
        vectors.push_back(pair<int, int>(a, b));
    }

    sort(vectors.begin(), vectors.end(), cmp);

    for (int i=0; i < n; i++){
        printf("%d %d\n", vectors[i].first, vectors[i].second);
    }

    return 0;
}

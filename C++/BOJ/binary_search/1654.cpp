#include <iostream>
#include <algorithm>

using namespace std;


/* 랜선 자르기 https://www.acmicpc.net/problem/1654
첫번째 풀이 : 시간 초과 -> 이분탐색 방법 공부하고 이용해보기 */


int main(void){
    long long k, n, lines[10000];
    long long middle, start=0, end=0;

    std::cin>>k>>n;

    for (int i=0; i<k; i++){
        std::cin>>lines[i];
        if (end < lines[i]){
            end = lines[i];
        }
    }

    long long cnt = 0;

    while (start <= end) {
        cnt = 0;
        middle = (start + end) / 2;

        if (middle == 0) {
            std::cout<<"1\n";
            return 0;
        }

        for (int i=0; i<k; i++){
            cnt += lines[i] / middle;
        }
        if (cnt < n) {
            end = middle-1;
        }
        else if (cnt >= n) {
            start = middle+1;
        }
    }
    std::cout<<end;
    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;


/* 랜선 자르기 https://www.acmicpc.net/problem/1654
첫번째 풀이 : 시간 초과 -> 이분탐색 방법 공부하고 이용해보기 */


int main(void){
    int k, n, lines[10000];
    int middle, start=0, end=0, result;

    std::cin>>k>>n;

    for (int i=0; i<k; i++){
        std::cin>>lines[i];
        if (end < lines[i]){
            end = lines[i];
        }
    }

    int cnt = 0;

    while (start < end) {
        cnt = 0;
        middle = (start + end) / 2;

        std::cout<<cnt<<"->"<<start<<" "<<middle<<" "<<end<<"\n";

        for (int i=0; i<k; i++){
            cnt += lines[i] / middle;
        }
        if (cnt < n) {
            end = middle;
        }
        else if (cnt > n) {
            start = middle;
        }
        else {
            result = middle;
            start  = middle+1;
        }
        //std::cout<<cnt<<"->"<<start<<" "<<end<<"\n";
    }
    //std::cout<<cnt<<"->"<<start<<" "<<end<<"\n";
    std::cout<<result;
}
#include <iostream>
#include <algorithm>

using namespace std;

/* 평균 https://www.acmicpc.net/problem/1546 */

int main(void){
    int n;

    std::cin>>n;

    int scores[n];

    for (int i=0; i<n; i++){
        std::cin>>scores[i];
    }

    double max_score, average;
    max_score = *max_element(scores, scores+n);

    for (int i=0; i<n; i++){
        average += scores[i];
    }

    average = average /  max_score * 100 / n ;

    std::cout<<average;

}
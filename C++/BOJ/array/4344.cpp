#include <iostream>

using namespace std;

"""
TODO
배열 함수 사용하는 법 공부해서 정리해두기
동적으로 배열 길이 선언하는 부분 정리해두기
더 코드를 간단하게 짤 수 있는지 확인하기
"""


/* 평균은 넘겠지
문제
대학생 새내기들의 90%는 자신이 반에서 평균은 넘는다고 생각한다. 당신은 그들에게 슬픈 진실을 알려줘야 한다.

입력
첫째 줄에는 테스트 케이스의 개수 C가 주어진다.

둘째 줄부터 각 테스트 케이스마다 학생의 수 N(1 ≤ N ≤ 1000, N은 정수)이 첫 수로 주어지고, 이어서 N명의 점수가 주어진다. 점수는 0보다 크거나 같고, 100보다 작거나 같은 정수이다.

출력
각 케이스마다 한 줄씩 평균을 넘는 학생들의 비율을 반올림하여 소수점 셋째 자리까지 출력한다.*/


// 배열 함수 사용하는 법 다시 공부하기
double get_average(double array[], int n){
    double average = 0.;
 
    for (int i = 0; i < n; i++){
        average += array[i];
    }

    average /= n;

    return average;
}

int main(void){
    int C;
    
    std::cin>>C;
    
    // result[C];는 되는데 result[C] = {0, }는 안됨
    double results[C];

    for (int i=0; i < C; i++){
        int n;
        std::cin>>n;
        results[i] = 0;

        double scores[n];
        
        for (int j=0; j < n; j++){
            std::cin>>scores[j];
        }

        double avg;
        avg = get_average(scores, n);

        for (int j=0; j < n; j++){
            if (scores[j] > avg){
                results[i] += 1;
            }
        }
        results[i] = (results[i] / n) * 100;

        cout << fixed;
        cout.precision(3);
        std::cout<<results[i]<<"%\n";
    }
}

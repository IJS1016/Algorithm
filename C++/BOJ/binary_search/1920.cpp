#include <iostream>
#include <algorithm>

using namespace std;

/* 1920 수 찾기 - 수정하기
이진탐색 - 직접 구현하지 않고 binary search 함수로도 풀 수 있음
       - 직접 구현시 포인터를 사용해야지 배열 전체를 안불러와 더 빠르다고 함
       https://www.acmicpc.net/board/view/67289 */

int main(void){
    int n, m;

    long long array[100000], num;
    
    std::cin>>n;

    for (int i=0; i<n; i++){
        std::cin>>array[i];
    }

    sort(array, array+n);

    std::cin>>m;

    for (int i=0; i<m; i++){
        std::cin>>num;

        int start = 0, end = n-1, mid;

        while (start <= end){
            mid = (start + end) / 2;

            //std::cout<<start<<" "<<mid<<" "<<end<<"\n";
            if (array[mid] > num){
                end = mid - 1;
            }
            else {
                start = mid + 1;
            }
        }
        if (array[end] == num) {
            std::cout<<"1\n";
        }

        else {
            std::cout<<"0\n";
        }
    }
    
    return 0;
}
#include <iostream>
#include <algorithm>

using namespace std;

/* 1920 수 찾기 - 수정하기
이진탐색 - 직접 구현하지 않고 binary search 함수로도 풀 수 있음
       - 직접 구현시 포인터를 사용해야지 배열 전체를 안불러와 더 빠르다고 함
       https://www.acmicpc.net/board/view/67289 
       오답 -> 입출력을 printf, scanf로 바꿨더니 맞았음
           -> 예외처리 : 입력이 1개만 들어왔을 때 mid - -1에서 end가 -1이 되어, array[end]=1가 되는 문제 발생
           -> end가 -1이 되는 경우 예외처리 해줌
       */

int main(void){
    int n, m;

    long long array[100000], num;
    
    scanf("%d", &n);

    for (int i=0; i<n; i++){
        scanf("%lld", &array[i]);
    }

    sort(array, array+n);

    scanf("%d", &m);

    for (int i=0; i<m; i++){
        scanf("%lld", &num);

        int start = 0, end = n-1, mid;

        while (start <= end){
            mid = (start + end) / 2;

            //std::cout<<start<<" "<<mid<<" "<<end<<"\n";
            if (array[mid] > num){
                end = mid - 1;
            }
            else if ((array[mid] < num)) {
                start = mid + 1;
            }
            else {
                end = mid;
                break;
            }
        }

        if (end == -1 or array[end] != num){
            printf("0\n");
        }

        else {
            printf("1\n");
        }
    }
    
    return 0;
}
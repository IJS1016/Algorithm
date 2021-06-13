#include <iostream>
#include <algorithm>

/* 1966 프린터 큐 */


bool compare(int i, int j){ // 오름차순 정렬을 위한 compare
    return j < i;
}

int main(void) {
    int test_case;
    scanf("%d", &test_case);

    for (; test_case > 0; test_case--){
        int num_paper, idx;   // 문서수, 언제 print 되는지 알고 싶은 idx
        int importance[100];  // 중요도 (최대 길이인 100으로 선언)
        
        // 변수 입력 
        scanf("%d %d", &num_paper, &idx);        

        for (int idx=0; idx < num_paper; idx++){
            scanf("%d", &importance[idx]);
        }

        // 정렬하기 위한 배열 복사 & 오름차순 정렬
        int sorted_importance[100];
        std::copy(importance, importance + num_paper, sorted_importance);
        std::sort(sorted_importance, sorted_importance+num_paper, compare);


        // importance의 현재 idx를 나타내는 변수
        int i=0;

        // sidx는 sorted_importance의 idx로서 우선순위가 높은 순서대로 importance와 배열이 일치하는지 검사
        // 일치한다면 sidx++ 해주어 다음 순서의 우선순위를 체크
        for (int sidx=0; sidx < num_paper; sidx++){
            while (sorted_importance[sidx] != importance[i]){
                i = (i + 1) % num_paper;
            }
            
            if (i == idx){ // 현재 importance idx와 알기 원하는 idx가 일치하는 경우 지금까지 출력한 개수와 동일한 sidx를 print
                printf("%d\n", sidx+1);
                break;
            }
            importance[i] = -1;
        }
    }
   return 0;
}
 
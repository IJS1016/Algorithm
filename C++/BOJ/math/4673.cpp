#include <iostream>
#include <algorithm>
using namespace std;

/* 셀프 넘버 https://www.acmicpc.net/problem/4673 */

int main(void){
    int limit = 10000, excepts[10000], cnt = 0;

    for (int i=1; i<=limit; i++){
        int not_self_num = i, num = i, flag = 0;

        while (num != 0){
            not_self_num += num % 10;
            num /= 10;

            if (not_self_num > limit){
                flag = 1;
                break;
            }
        }

        if (flag == 1){
            continue;
        }

        for (int j=0; j < cnt; j++){
            if (excepts[j] == not_self_num){
                flag = 1;
                break;
            }
        }

        if (flag == 0){
            excepts[cnt] = not_self_num;
            cnt += 1;
        }
    }    

    sort(excepts, excepts+cnt);

    cnt = 0;

    for (int j=1; j < limit; j++){
        if (j == excepts[cnt]){
            cnt += 1;
            continue;
        }
        else {
            std::cout<<j<<"\n";
        }
    }
}
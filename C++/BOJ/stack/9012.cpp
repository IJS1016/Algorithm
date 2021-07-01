#include <iostream>
#include <cstring>

/* 괄호 https://www.acmicpc.net/problem/9012 */

int main(void) {
    int n;

    scanf("%d", &n);

    for (int i=0; i<n; i++){
        int idx=0, flag=0;
        std::string line;
        std::cin>>line;

        for (int j=0; j<line.length(); j++) {
            if (line[j] == '(') {
                idx += 1;
            }
            else if (line[j] == ')') {
                if (idx > 0) {
                    idx -= 1;
                }
                else {
                    flag=1;
                    break;
                }
            }
        }
        if (flag==1 or idx != 0) {
            printf("NO\n");
        }
        else {
            printf("YES\n");
        }
    }

    return 0;

}
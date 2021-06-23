#include <iostream>
#include <cstring>
#include <stack>

/* 균형잡힌 세상 https://www.acmicpc.net/problem/4949 */

int main(void) {
    char line[102];
    int flag=0;
    std::stack<char> stack;

    while (scanf("%[^.]s", line)) {
        //printf("%s\n", line);
        getchar();
        getchar();

        for (int i=0; i<strlen(line); i++){
            if (line[i] == '(' or line[i] ==  '[') {
                stack.push(line[i]);
            }

            else if (line[i] == ']' or line[i] == ')') {
                if (stack.size() == 0) {
                    flag = 1;
                    break;
                }
                if ((line[i] == ']' and stack.top() != '[') or (line[i] == ')' and stack.top() != '(')) {
                    flag = 1;
                    break;
                }
                stack.pop();
            }
        }
         
        if (!stack.empty() or flag == 1) {
            printf("no\n");
            while (!stack.empty()) {
                stack.pop();
            }
        }

        else if (flag == 0) {
            printf("yes\n");
        }
        flag = 0;
    }
    return 0;
}

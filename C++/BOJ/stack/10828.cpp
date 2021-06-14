#include <iostream>
#include <cstring>
#include <stack>

using namespace std;

int main(void) {
    int N;

    scanf("%d", &N);

    for (int i=0; i<N; i++){
        int value;
        string opt;

        stack<int> s;

        getline(cin, opt);

        if (opt == "push") {
            scanf("%d", &value);
            s.push(value);
        }

        else if (opt == "pop") {
             if (s.empty()) {
                printf("%d\n", s.top());
                s.pop();
                continue;
            }
            printf("-1\n");
        }

        else if (opt == "size") {
            printf("%lu\n", s.size());
        }

        else if (opt == "empty") {
            if (s.empty()) {
                printf("0\n");
                continue;
            }
            printf("1\n");
        }

        else if (opt == "top") {
            if (s.empty()) {
                printf("%d\n", s.top());
                continue;
            }
            printf("-1\n");
        }

    }


    return 0;
}
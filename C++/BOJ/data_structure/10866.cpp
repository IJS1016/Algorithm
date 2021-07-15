#include <iostream>
#include <cstring>


/* 덱  https://www.acmicpc.net/problem/10866 */


void empty(int size) {
    if (size == 0) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
}

int front(int deque[], int size) {
    if (size == 0) {
        printf("-1\n");
        return -1;
    }
    printf("%d\n", deque[0]);
    return 1;
}

int back(int deque[], int size) {
    if (size == 0) {
        printf("-1\n");
        return -1;
    }
    printf("%d\n", deque[size-1]);
    return 1;
}

void push_front(int deque[], int x, int size) {
    // printf("front 1 {");
    // for (int i=0; i < size+1; i++) {
    //     printf("%d, ", deque[i]);
    // }
    // printf("}\n");

    for (int i = size; i > 0; i--) {
        deque[i] = int(deque[i-1]);
    }

    deque[0] = x;

    // printf("front 2 {");
    // for (int i=0; i < size+1; i++) {
    //     printf("%d, ", deque[i]);
    // }
    // printf("}\n");
}

void push_back(int deque[], int x, int size) {
    deque[size] = x;
}

void pop_front(int deque[], int size) {
    if (!(front(deque, size) == -1)) {
        for (int i=1; i < size; i++){
            deque[i-1] = deque[i];
        }
    }
}

void pop_back(int deque[], int size) {
    if (!(back(deque, size) == -1)) {
        deque[size-1] = 0;
    }
}

int main(void) {
    int deque[100005];
    int size = 0, n, x;
    char opt[11];

    scanf("%d", &n);

    for (int i=0; i < n; i++) {
        scanf("%s", opt);

        if (!strcmp(opt, "push_front") or !strcmp(opt, "push_back")) {
            scanf("%d", &x);
            if (!strcmp(opt, "push_front")) {
                push_front(deque, x, size);
            }
            else {
                push_back(deque, x, size);
            }
            size += 1;
        }

        else if (!strcmp(opt, "pop_front") or !strcmp(opt, "pop_back")) {
            if (!strcmp(opt, "pop_front")) {
                pop_front(deque, size);
            }
            else {
                pop_back(deque, size);
            }

            if (size != 0) {
                size -= 1;
            }
        }

        else if (!strcmp(opt, "front")) {
            front(deque, size);
        }
        
        else if (!strcmp(opt, "back")) {
            back(deque, size);
        }

        else if (!strcmp(opt, "size")) {
            printf("%d\n", size);
        }
        
        else if (!strcmp(opt, "empty")) {
            empty(size);
        }

        // printf("{");
        // for (int i=0; i < size; i++) {
        //     printf("%d, ", deque[i]);
        // }
        // printf("}\n");
    }

    return 0;

}

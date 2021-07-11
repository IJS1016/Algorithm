#include <iostream>

void empty(int size) {
    if (size == 0) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }
}

int front(int queue[], int size) {
    if (size == 0) {
        printf("-1\n");
        return -1;
    }
    printf("%d\n", queue[0]);
    return 1;
}

void back(int queue[], int size) {
    if (size == 0) {
        printf("-1\n");
    }
    else {
        printf("%d\n", queue[size-1]);
    }
}

int push(int queue[], int x, int size) {
    queue[size] = x;

    return size + 1;
}

int pop(int queue[], int size) {
    if (front(queue, size) == -1) {
        return 0;
    }
    
    for (int i=1; i < size; i++){
        queue[i-1] = queue[i];
    }

    return size - 1;
}

int main(void) {
    int queue[100000];
    int size = 0, n, x;
    char opt[6];

    scanf("%d", &n);

    for (int i=0; i < n; i++) {
        scanf("%s", opt);

        if (!strcmp(opt, "push")) {
            scanf("%d", &x);
            size = push(queue, x, size);
        }

        else if (!strcmp(opt, "pop")) {
            size = pop(queue, size);
        }

        else if (!strcmp(opt, "front")) {
            front(queue, size);
        }
        
        else if (!strcmp(opt, "back")) {
            back(queue, size);
        }

        else if (!strcmp(opt, "size")) {
            printf("%d\n", size);
        }
        
        else if (!strcmp(opt, "empty")) {
            empty(size);
        }

    }

    return 0;
    
}

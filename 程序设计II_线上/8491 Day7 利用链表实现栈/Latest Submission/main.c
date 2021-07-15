#include <stdio.h>
#include "stack.h"

void PopAndPrint(Stack*);

int main() {
    Stack mystack;
    InitiateStack(&mystack);
    int n, tmp;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &tmp);
        push(&mystack, tmp);
    }
    PopAndPrint(&mystack);
    return 0;
}

void PopAndPrint(Stack* stk) {
    printf("TOP\tSIZE\n");
    while (!empty(stk)) {
        int tmp = top(stk);
        printf("%d\t%d\n", tmp, size(stk));
        pop(stk);
    }
    puts("");
}
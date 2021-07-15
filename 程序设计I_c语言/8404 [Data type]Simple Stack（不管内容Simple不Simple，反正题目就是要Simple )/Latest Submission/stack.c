#include <stdlib.h>
#include "stack.h"
int stack_push(int* stack, int num) {
	if (*stack >= STACK_MAX_SIZE) return 0;
	else {
		(*stack)++;
		stack[*stack] = num;
		return 1;
	}
}

int stack_pop(int* stack) {
	if (*stack == 0)
		return 0;
	else
		return 1;
}

int stack_top(int* stack, int* ret) {
	if (*stack == 0)
		return 0;
	else {
		*ret = stack[*stack];
		(*stack)--;
		return 1;
	}
}

int* stack_constructor(void) {
	int* p = (int*)malloc((STACK_MAX_SIZE+2)*sizeof(int*));
    if(p!=NULL)
	    p[0] = 0;
	return p;
}

void stack_destructor(int* stack) {
	int* a = stack;
	while (stack != NULL) {
		a = stack + 1;
		free(stack);
		stack=a;
	}
}
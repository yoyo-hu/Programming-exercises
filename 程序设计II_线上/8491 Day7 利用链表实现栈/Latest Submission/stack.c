typedef struct Node {
	int val;
	struct Node* next;
} node;

typedef struct {
	int size;
	node* top;
} Stack;
#include <stdio.h>
#include <stdlib.h>
void InitiateStack(Stack*stackHead) {
	stackHead->size = 0;
	stackHead->top = NULL;
}
void push(Stack* stack, const int val) {
	node*temp = (node*)malloc(sizeof(node));
	temp->next = stack->top;
	temp->val = val;
	stack->top = temp;
	stack->size++;
}
void pop(Stack* stack) {
	if (stack->size == 0)return;
	node* p = stack->top;
	stack->top = p->next;
	stack->size--;
	free(p);
}
int empty(const Stack*stack) {
	if (stack->size == 0)return 1;
	return 0;
}
int top(const Stack*stack) {
	if (stack->size == 0)return 0;
	return stack->top->val;
}
int size(const Stack*stack) {
	return stack->size;
}
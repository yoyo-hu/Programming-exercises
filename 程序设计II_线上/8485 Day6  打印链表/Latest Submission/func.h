#include <stdlib.h>
#include <stdio.h>

typedef struct ListNode{
	int val;
	struct ListNode* next;
}ListNode;

ListNode* creatList(char* fileName);

void printList(ListNode* head);

void freeList(ListNode* head);

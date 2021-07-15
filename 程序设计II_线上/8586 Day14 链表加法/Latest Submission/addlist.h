#include <stdlib.h>

typedef struct ListNode{
	int val;
	struct ListNode* next;
}ListNode;

ListNode* listAdd(ListNode* list1,ListNode* list2);

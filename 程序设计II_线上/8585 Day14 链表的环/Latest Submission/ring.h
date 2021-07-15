#include <stdlib.h>

typedef struct ListNode{
	int val;
	struct ListNode* next;
}ListNode;

int hasRing(ListNode* head);

int entryVal(ListNode* head);

int nodeNumber(ListNode* head);

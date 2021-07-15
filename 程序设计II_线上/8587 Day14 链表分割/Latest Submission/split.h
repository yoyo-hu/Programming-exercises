#include <stdlib.h>

typedef struct ListNode{
	int val;
	struct ListNode* next;
}ListNode;

ListNode** splitList1(ListNode* head);

ListNode** splitList2(ListNode* head,int k);

ListNode** splitList3(ListNode* head,int x);

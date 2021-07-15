#include <stdlib.h> 

typedef struct ListNode{
	int val;
	struct ListNode* next;
	struct ListNode* random; 
}ListNode;

ListNode* copyList(ListNode* head);

#include <stdlib.h> 

typedef struct ListNode {
	int val;
	struct ListNode* next;
	struct ListNode* random;
}ListNode;
ListNode* copyList(ListNode* head) {
	if(head==NULL)
		return NULL;
	ListNode* p = head;
	ListNode* q = head->next;
	ListNode*newNode = NULL;
	while (p != NULL) {
		q = p->next;
		newNode = (ListNode*)malloc(sizeof(ListNode));
		newNode->next = p->next;
		newNode->val = p->val;
		newNode->random = NULL;
		p->next = newNode;
		p = q;
	}
	p = head;
	q = p->next;
	while (q != NULL) {
		q = p->next;
		if (p->random != NULL)
			q->random = p->random->next;
		if (q->next == NULL)
			break;
		p = q->next;
	}
	newNode = head->next;
	q = newNode;
	while (q->next != NULL) {
		q->next = q->next->next;
		q = q->next;
	}
	return newNode;
}

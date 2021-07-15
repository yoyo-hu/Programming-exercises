#include <stdlib.h>

typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;
ListNode* listAdd(ListNode* list1, ListNode* list2) {
	ListNode* p = list1;
	ListNode* q = list2;
	ListNode* head = NULL;
	ListNode* temp = NULL;
	int mark_head = 0;
	int carry = 0;
	while (p != NULL && q != NULL) {
		ListNode* l = (ListNode*)malloc(sizeof(ListNode));
		l->val = p->val + q->val+carry;
		carry = l->val / 10;
		l->val = l->val % 10;
		l->next = NULL;
		if (mark_head == 0) {
			head = l;
			temp = l;
            mark_head =1;
		}
		else {
			temp->next = l;
			temp = l;
		}
		p = p->next;
		q = q->next;
	}
	while(p != NULL) {
		ListNode* l = (ListNode*)malloc(sizeof(ListNode));
		l->val = p->val+ carry;
		carry = l->val / 10;
		l->val = l->val % 10;
		l->next = NULL;
		if (mark_head == 0) {
			head = l;
			temp = l;
            mark_head =1;
		}
		else {
			temp->next = l;
			temp = l;
		};
		p = p->next;
	}
	while (q != NULL) {
		ListNode* l = (ListNode*)malloc(sizeof(ListNode));
		l->val = q->val + carry;
		carry = l->val / 10;
		l->val = l->val % 10;
		l->next = NULL;
		if (mark_head == 0) {
			head = l;
			temp = l;
            mark_head =1;
		}
		else {
			temp->next = l;
			temp = l;
		}
		q = q->next;
	}
	while (carry!=0) {
		ListNode* l = (ListNode*)malloc(sizeof(ListNode));
		l->val = carry;
		carry = l->val / 10;
		l->val = l->val % 10;
		l->next = NULL;
		temp->next = l;
		temp = l;
	}
	return head;
}
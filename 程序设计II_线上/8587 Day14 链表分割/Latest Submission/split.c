#include <stdlib.h>

typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;

ListNode** splitList1(ListNode* head) {
	ListNode** result = (ListNode **)malloc(2 * sizeof(ListNode*));
	if (head == NULL || head->next == NULL) {
		result[0] = head;
		result[1] = NULL;
		return result;
	}
	ListNode* slow = head;
	ListNode* fast = head;
	ListNode* front = slow;
	while (fast != NULL&&fast->next!=NULL) {
		front = slow;
		slow = slow->next;
		fast = fast->next->next;
	}
	if (fast == NULL) {
		front->next = NULL;
		result[0] = head;
		result[1] = slow;
		return result;
	}
	else {
		result[0] = head;
		result[1] = slow->next;
		slow->next = NULL;
		return result;
	}
}
ListNode** splitList2(ListNode* head, int k) {
	ListNode** result = (ListNode **)malloc(2 * sizeof(ListNode*));
	ListNode* temp = head;
	ListNode* p = head;
	while (temp != NULL && k != 0) {
		temp = temp->next;
		k--;
	}
	if (temp == NULL) {
		if (k != 0) {
			result[0] = head;
			result[1] = NULL;
			return result;
		}
		else {
			result[1] = head;
			result[0] = NULL;
			return result;
		}
	}
	while (temp->next != NULL) {
		p = p->next;
		temp = temp->next;
	}
	result[0] = head;
	result[1] = p->next;
	p->next = NULL;
	return result;
}
ListNode** splitList3(ListNode* head, int x) {
	ListNode** result = (ListNode **)malloc(3 * sizeof(ListNode*));
	ListNode* head1 = NULL;
	ListNode* head2 = NULL;
	ListNode* temp = head;
	ListNode* p = head1;
	ListNode* q = head2;
	int mark_head1 = 0;
	int mark_head2 = 0;
	while (temp != NULL) {
		if (temp->val > x) {
			if (mark_head1 == 0) {
				mark_head1 = 1;
				head1 = temp;
				p = temp;
			}
			else {
				p->next = temp;
				p = temp;
			}
		}
		else {
			if (mark_head2 == 0) {
				mark_head2 = 1;
				head2 = temp;
				q = temp;
			}
			else {
				q->next = temp;
				q = temp;
			}
		}
		temp = temp->next;
	}
	if(p!=NULL)
		p->next = NULL;
	if(q!=NULL)
		q->next = NULL;
	result[0] = head1;
	result[1] = head2;
	return result;
}

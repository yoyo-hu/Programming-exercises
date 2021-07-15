#include <stdlib.h>
int count[1000000] = { 0 };
int sort[1000000];
int mark_sort = 0;
typedef struct ListNode {
	int val;
	struct ListNode* next;
}ListNode;

int hasRing(ListNode* head) {
	ListNode* p = head;
	while (p != NULL) {
		sort[mark_sort++] = p->val;
		count[sort[mark_sort-1]]++;
		p = p->next;
		if (count[sort[mark_sort-1]] == 2)
			return 1;
	}
	return 0;
}

int entryVal(ListNode* head) {
	return sort[mark_sort-1];
}

int nodeNumber(ListNode* head) {
	for(int i=0;i<mark_sort-1;i++){
        if(sort[i] == sort[mark_sort-1])
        return mark_sort-1-i;
    }
	return 0;
}
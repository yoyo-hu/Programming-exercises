#include "func.h"

int main() {
	char fileName[20];
	scanf("%s",fileName);
	ListNode* head=creatList(fileName);
	printList(head);
	freeList(head);
	return 0;
}

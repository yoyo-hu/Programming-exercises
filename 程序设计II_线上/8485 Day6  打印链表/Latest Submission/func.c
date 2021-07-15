#include "func.h"
#include <ctype.h>
ListNode* creatList(char* fileName) {
	FILE* fp;
    char x;
    int n=0;
	if ((fp = fopen(fileName, "r")) == NULL)
		return NULL;
	while(x!=EOF&&(x = fgetc(fp))!=EOF){
        while(x!=EOF&&isdigit(x)){
            n=n*10+(x-'0');
            x=fgetc(fp);
            }
        if(n>0)break;
    }
    
	ListNode* head = (ListNode*)malloc(sizeof(ListNode));
	head->next = NULL;
	ListNode* p = head;
	int i;
	for (i = 0; i < n; i++) {
		int storage=0;
        int flag=0;
       while(x!=EOF&&(x = fgetc(fp))!=EOF){
        while(x!=EOF&&isdigit(x)){
            storage=storage*10+(x-'0');
            x=fgetc(fp);
            flag=1;
            }
        if( flag==1)break;
    }
        ListNode* temp = (ListNode*)malloc(sizeof(ListNode));
		temp->next = NULL;
		temp->val = storage;
		p->next = temp;
		p = temp;
	}
	return head;
}
void printList(ListNode* head) {
    if(head==NULL){
        printf("null");
        return;
    }
	ListNode* p = head->next;
	while (p != NULL) {
		printf("%d->", p->val);
		p=p->next;
	}
	printf("null");
}
void freeList(ListNode* head) {
	ListNode* p = head;
	while (p != NULL) {
		p = head->next;
		free(head);
		head = p;
	}
}
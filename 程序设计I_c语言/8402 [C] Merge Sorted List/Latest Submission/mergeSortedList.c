#include "mergeSortedList.h"
void push_front(node** head, int val) {
	node* p = (node*)malloc(sizeof(node));
	p->val = val;
	p->next = *head;
	*head = p;
}
node* mergeSortedList(node* head1, node* head2) {
	node* q=head2;
    node* p=head1;
    node* temp=NULL;
    if(head1==NULL)return head2;
    if(head2==NULL)return head1;
    if(p->val>=q->val){
        while(q->next&&q->next->val<=p->val)q=q->next;
        temp=q->next;
        q->next=p;
        q=temp;
        }
	while(p->next){
        if(p->next&&q->next&&p->next->val>=q->val){
        while(p->next&&q->next&&q->next->val<=p->next->val)q=q->next;
        temp=q->next;
        q->next=p->next;
        p->next=q;
        q=temp;
        }
        p=p->next;
    }
    p->next=q;
    return head1;
}

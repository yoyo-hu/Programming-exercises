#include "mergeSortedList.h"

void push_front(node** head, int val) {
 node* new_node = (node*)malloc(sizeof(node));
 new_node->val = val;
 new_node->next = *head;
 *head = new_node;
}


node* mergeSortedList(node* head1, node* head2) {
 if (head1 == NULL) return head2;
 if (head2 == NULL) return head1;

 node* newHead = NULL;
 if (head1->val < head2->val) {
  newHead = head1;
  newHead->next = mergeSortedList(head1->next, head2);
 } else {
  newHead = head2;
  newHead->next = mergeSortedList(head1, head2->next);  
 }
 return newHead;
}
#include "mergeSortedList.h"

void destroy(node** head) {
 node* p = *head;
 while (p) {
  node* temp = p;
  p = p->next;
  free(temp);
 }
 *head = NULL;
}

void print(node* head) {
 while (head) {
  printf("%d->", head->val);
  head = head->next;
 }
 printf("NULL\n");
}

int main() {
 node *head1 = NULL, *head2 = NULL;
 int size, val;
 scanf("%d", &size);
 for (int i = 0; i < size; ++i) {
  scanf("%d", &val);
  push_front(&head1 ,val);
 }
 print(head1);

 scanf("%d", &size);
 for (int i = 0; i < size; ++i) {
  scanf("%d", &val);
  push_front(&head2 ,val);
 }
 print(head2);

 node* head = mergeSortedList(head1, head2);
 print(head);

 if (head1)
   printf("head1: %d ", head1->val);
 if (head2)
   printf("head2: %d\n", head2->val);

 destroy(&head);
 return 0;
}
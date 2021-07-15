#ifndef MERGESORTEDLIST_H
#define MERGESORTEDLIST_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
 int val;
 struct node* next;
} node;

void push_front(node** head, int val);

node* mergeSortedList(node* head1, node* head2);


#endif
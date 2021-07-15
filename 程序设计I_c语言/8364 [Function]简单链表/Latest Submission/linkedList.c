#include "linkedList.h"
#include <stdlib.h>
int t = 0;
bool insert(int position, int value) {

	if (t == 0) {
		t = 1;
		node* d = (node*)malloc(sizeof(node));
		head = d;
		d->next = NULL;
		for (int i = 0; i < 100; i++) {
			node* a = (node*)malloc(sizeof(node));
			a->next = NULL;
			d->next = a;
			d = a;
		}
	}
	if (position >= 0 && position <= size) {
		size++;
		node* a = head;
		node* b;
		for (int i = 0; i < position; i++)
			a = a->next;
		node* c = (node*)malloc(sizeof(node));
		c->value = value;
		c->next = a->next;
		a->next=c;
		return 1;
	}
	else
		return 0;
}
int get(int position) {
	node* k = head;
	for (int i = 0; i <= position; i++)
		k = k->next;
	return k->value;
}
void clear() {
	node* p ;
	while ((head->next) != NULL) {
		p = head;
		head =head->next;
		free(p);
	}
	free(head);
}
typedef struct Node {
	int val;
	struct Node* next;
}List;
#include <stdio.h>
#include <stdlib.h>
//Create linked list
List* creatList() {
	List* head = (List*)malloc(sizeof(List));
	head->next = NULL;
	return head;
}
int getValue(List* myList, int index) {
	if (index == 0)return 0;
	List* p = myList->next;
	int j = 1;
	while (p != NULL && j < index)
	{
		j++;
		p = p->next;
	}
	if (p == NULL) return 0;
	else
		return p->val;
}
void addAtHead(List* myList, int val) {
	if (myList == NULL)
		return;
	else {
		List* temp = (List*)malloc(sizeof(List));
		temp->val = val;
		temp->next = myList->next;
		myList->next = temp;
	}
}
void addAtTail(List* myList, int val) {
	if (myList == NULL)
		return;
	else {
		List* temp = (List*)malloc(sizeof(List));
		temp->val = val;
		temp->next = NULL;
		List* p = myList;
		while (p->next != NULL) {
			p = p->next;
		}
		p->next = temp;
	}

}
int addAtIndex(List* myList, int index, int val) {
	if (index == 0)return 0;
	List* p = myList->next;
	int i = 1;
	if (index == 1) {
		addAtHead(myList, val);
		return 1;
	}
	while (p != NULL) {
		i++;
		if (index == i) {
			List* temp = (List*)malloc(sizeof(List));
			temp->val = val;
			temp->next = p->next;
			p->next = temp;
			return 1;
		}
		p = p->next;
	}
	return 0;
}
int deleteAtHead(List* myList) {
	if (myList == NULL || myList->next == NULL)
		return 0;
	List* p = myList->next;
	myList->next = myList->next->next;
	free(p);
	return 1;
}
int deleteAtIndex(List* myList, int index) {
	if (index == 0)return 0;
	List* p = myList->next;
	int i = 1;
	if (index == 1) {
		deleteAtHead(myList);
		return 1;
	}
	while (p != NULL) {
		i++;
		if (i == index) {
			if (p->next == NULL)
				return 0;
			List* temp = p->next;
			p->next = p->next->next;
			free(temp);
			return 1;
		}
		p = p->next;
	}
	return 0;
}
void reverseList(List* myList) {
	if (myList == NULL || myList->next == NULL || myList->next->next == NULL)
		return;
	else {
		List* front = myList->next;
		List* back = myList->next->next;
		List* temp = back->next;
        	front->next = NULL;
		while (back != NULL) {
			temp = back->next;
			back->next = front;
			front = back;
			back = temp;
		}
		myList->next = front;
	}
}
int printList(List* myList) {
	if (myList == NULL)
		return 0;
	List* p = myList->next;
	while (p != NULL) {
		printf("%d->", p->val);
		p = p->next;
	}
	printf("null\n");
	return 1;
}
void freeList(List* myList) {
	List* p = NULL;
	while (myList != NULL) {
		p = myList->next;
		free(myList);
		myList = p;
	}
}
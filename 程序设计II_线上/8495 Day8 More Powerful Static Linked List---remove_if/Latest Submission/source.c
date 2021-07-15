

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>
#define MaxSize 30
#define NullPtr -1
typedef int ValueType;
typedef int Pointer;
typedef int Position;
typedef int Index;
typedef unsigned int SizeType;
typedef struct node {
	ValueType value;
	Pointer next;
}Node;
struct manager {
	int beuser;
	Node bemalloc;
};
struct memoryManager {
	Node Memory[MaxSize];
	struct manager* Manager;
};
typedef struct staticLinkedList {
	Pointer head;
	SizeType size;
}StaticLinkedList;
void iniManager(struct memoryManager* Amanager) {
	for (int i = 0; i < MaxSize - 1; i++) {
		Amanager->Memory[i].next = i + 1;
	}
	Amanager->Memory[MaxSize - 1].next = 0;
	Amanager->Manager = (struct manager*)malloc(sizeof(struct manager));
	Amanager->Manager->beuser = 0;
	Amanager->Manager->bemalloc.next = 0;
}
void releaseManager(struct memoryManager* Amanager) {
	free(Amanager->Manager);
}
void iniList(StaticLinkedList* Alist) {
	Alist->size = 0;
	Alist->head = -1;
}
int mallocd(struct memoryManager* Amanager) {
	int i = Amanager->Manager->bemalloc.next;
	if (Amanager->Manager->beuser >= MaxSize)
		return 0;
	else {
		Amanager->Manager->bemalloc.next = Amanager->Memory[i].next;
		Amanager->Manager->beuser++;
		return i;
	}
}
bool insert(StaticLinkedList* Alist, struct memoryManager* Amanager, ValueType val, Position where) {
	if (Amanager->Manager->beuser >= MaxSize)
		return 0;
	if (where > Alist->size)
		return 0;

	if (where == 0) {
		int i = mallocd(Amanager);
		Amanager->Memory[i].value = val;
		Amanager->Memory[i].next = Alist->head;
		Alist->head = i;
		Alist->size++;
	}
	else {
		int i = mallocd(Amanager);
		int j = Alist->head;
		where--;
		while (where) {
			where--;
			j = Amanager->Memory[j].next;
		}
		Amanager->Memory[i].value = val;
		Amanager->Memory[i].next = Amanager->Memory[j].next;
		Amanager->Memory[j].next = i;
		Alist->size++;
	}
	return 1;
}
void freed(struct memoryManager* Amanager, Pointer n) {
	int temp = Amanager->Manager->bemalloc.next;
	Amanager->Manager->bemalloc.next = n;
	Amanager->Memory[n].next = temp;
	Amanager->Manager->beuser--;
}
Pointer erase(StaticLinkedList* Alist, struct memoryManager* Amanager, Position where) {
	if (where >= Alist->size)
		return 0;
	if (where == 0) {
		int mark = Alist->head;
		Alist->head = Amanager->Memory[Alist->head].next;
		freed(Amanager, mark);
		Alist->size--;
	}
	else {
		int j = Alist->head;
		where--;
		while (where) {
			where--;
			j = Amanager->Memory[j].next;
		}
		int mark = Amanager->Memory[j].next;
		Amanager->Memory[j].next = Amanager->Memory[Amanager->Memory[j].next].next;
		freed(Amanager, mark);
		Alist->size--;
	}
	return 1;
}
bool pushBack(StaticLinkedList* Alist, struct memoryManager* Amanager, ValueType val) {
	if (Alist->size >= MaxSize / 2)
		return 0;
	if (Alist->size == 0) {
		int i = mallocd(Amanager);
		Amanager->Memory[i].value = val;
		Alist->head = i;
		Alist->size++;
	}
	else {
		int j = Alist->head;
		for (int i = 1; i < Alist->size; i++) {
			j = Amanager->Memory[j].next;
		}
		int i = mallocd(Amanager);
		Amanager->Memory[i].value = val;
		Amanager->Memory[i].next = Amanager->Memory[j].next;
		Amanager->Memory[j].next = i;
		Alist->size++;
	}
	return 1;
}
bool popBack(StaticLinkedList* Alist, struct memoryManager* Amanager) {
	if (Alist->size <= 0)
		return 0;
	if (Alist->size == 1) {
		freed(Amanager, Alist->head);
		Alist->head = 0;
		Alist->size--;
		return 1;
	}
	else {
		int j = Alist->head;
		for (int i = 2; i < Alist->size; i++) {
			j = Amanager->Memory[j].next;
		}
		freed(Amanager, Amanager->Memory[j].next);
		Amanager->Memory[j].next = 0;
		Alist->size--;
		return 1;
	}
}
void show(StaticLinkedList* Alist, struct memoryManager* Amanager) {
	if (Alist->size == 0) {
		printf("Null\n");
		printf("The size of this list is %d\n", Alist->size);
		return;
	}
	else {
		int j = Alist->head;
		for (int i = 0; i < Alist->size; i++) {
			printf("%d -> ", Amanager->Memory[j].value);
			j = Amanager->Memory[j].next;
		}
		printf("Null\n");
		printf("The size of this list is %d\n", Alist->size);
	}
}
int remove_if(StaticLinkedList* Alist, struct memoryManager* Amanager, bool (*fun)(const Node*)){
	int p = Alist->head;
	int result = 0;
	for (int i = 0; i < Alist->size;i++) {
		Node* x = (Node*)malloc( sizeof(Node));
		x->value = Amanager->Memory[p].value;
		if ((*fun)(x)) {
			int temp = Amanager->Memory[p].next;
			erase(Alist, Amanager, i);
			p = temp;
			result++;
			i--;
		}
		else {
			p = Amanager->Memory[p].next;
		}
        free(x);
	}
	return result;
}
#include "source.h"
struct manager {
	int beuser;
	int standby;
};
void iniManager(struct memoryManager* Amanager) {
	for (int i = 0; i < MaxSize-1; i++) {
		Amanager->Memory[i].next = i + 1;
	}
	Amanager->Memory[MaxSize - 1].next = 0;
	Amanager->Manager = (struct manager*)malloc( sizeof(struct manager));
	Amanager->Manager->beuser = 0;
    Amanager->Manager->standby = 0;
}
void releaseManager(struct memoryManager* Amanager) {
   free(Amanager->Manager);
}
void iniList(StaticLinkedList*Alist) {
	Alist->size = 0;
	Alist->head = 0;
}
int mallocd(struct memoryManager* Amanager) {
	int i = Amanager->Manager->standby;
	if (Amanager->Manager->beuser>=MaxSize)
		return 0;
	else {
		Amanager->Manager->standby = Amanager->Memory[i].next;
		Amanager->Manager->beuser++;
		return i;
	}
}
bool insert(StaticLinkedList* Alist,struct memoryManager*  Amanager , ValueType val, Position where ) {
	if (Amanager->Manager->beuser>=MaxSize)
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
void freed(struct memoryManager*Amanager, Pointer n) {
	int temp = Amanager->Manager->standby;
	Amanager->Manager->standby = n;
	Amanager->Memory[n].next = temp;
	Amanager->Manager->beuser--;
}
Pointer erase(StaticLinkedList*Alist, struct memoryManager*Amanager, Position where) {
	if (where >= Alist->size)
		return 0;
	if (where == 0) {
		int mark = Alist->head;
		Alist->head = Amanager->Memory[Alist->head].next;
	    freed(Amanager,mark);
		Alist->size--;
	}
	else {
		int j= Alist->head;
		where--;
		while (where) {
			where--;
			j = Amanager->Memory[j].next;
		}
		int mark = Amanager->Memory[j].next;
		Amanager->Memory[j].next = Amanager->Memory[Amanager->Memory[j].next].next;
		freed(Amanager,mark);
		Alist->size--;
	}
	return 1;
}
bool pushBack(StaticLinkedList* Alist, struct memoryManager* Amanager, ValueType val) {
	if (Alist->size >= MaxSize/2)
		return 0;
	if (Alist->size == 0) {
		int i = mallocd(Amanager);
		Amanager->Memory[i].value = val;
		Alist->head = i;
		Alist->size++;
	}
	else {
		int j = Alist->head;
		for(int i=1;i< Alist->size;i++) {
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
bool popBack(StaticLinkedList* Alist, struct memoryManager* Amanager){
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
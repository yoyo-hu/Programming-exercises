#ifndef SOURCE_H
#define SOURCE_H

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

typedef struct node{
    ValueType value;
    Pointer next;
}Node;
struct manager;
struct memoryManager{
    Node Memory[MaxSize];
    struct manager* Manager;
};
typedef struct staticLinkedList{
    Pointer head;
    SizeType size;
}StaticLinkedList;


void iniManager(struct memoryManager*);
void releaseManager(struct memoryManager*);

void iniList(StaticLinkedList*);
bool insert(StaticLinkedList*,struct memoryManager*,ValueType,Position);
Pointer erase(StaticLinkedList*,struct memoryManager*,Position);
bool pushBack(StaticLinkedList*,struct memoryManager*,ValueType);
bool popBack(StaticLinkedList*,struct memoryManager*);
void show(StaticLinkedList*,struct memoryManager*);

void reverse(StaticLinkedList*,struct memoryManager*);

#endif //SOURCE_H

#include <stdio.h>
#include <stdlib.h>

//val>0
typedef struct Node{
	int val;
	struct Node* next;
}List;

//Create linked list
List* creatList();
	
//Get the node by subscript, the subscript of the head node is 1
//If the node value is successfully obtained, the value is returned
//If it fails, return 0
int getValue(List* myList,int index);
	
//Add a node at the head
void addAtHead(List* myList,int val);
	
//Add a node at the end
void addAtTail(List* myList,int val);
	
//Add a node at subscript
//Add success returns 1.Add failure returns 0
int addAtIndex(List* myList,int index,int val);
	
//Delete head node
//Delete success returns 1.Delete failure returns 0
int deleteAtHead(List* myList);
	
//Delete subscript node
//Delete success returns 1.Delete failure returns 0
int deleteAtIndex(List* myList,int index);
	
//Reverse linked list
void reverseList(List* myList);

//Print linked list
//list:0  1  2  3  4  5
//form:0->1->2->3->4->5->null
void printList(List* myList);
	
//Free linked list
void freeList(List* myList);

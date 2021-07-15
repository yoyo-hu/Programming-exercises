#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MaxSize 100
typedef struct Hnode* MinHeap;
struct Hnode{
    int* data;
    int size;
    int Capacity;
};
int getRandomNum(){
    int RandomNum;
    RandomNum=rand();
    return  RandomNum;
}
/*Filter down and find the proper position of the node on the premise that all subtrees are the smallest heap. 
The tree with this node as the root node is a smallest heap*/
void FixDown(MinHeap h,int index){
    int parent;
    int child;
    int temp=h->data[index];
    for(parent=index;parent*2<=h->size;parent=child){
        child=parent*2;
        if(child+1<=h->size&&h->data[child+1]<h->data[child])
            child++;
        if(h->data[child]<temp){
            h->data[parent]=h->data[child];
        }
        else break;
    }
    h->data[parent]=temp;
}
/*The idea of recursion is adopted to establish the minimum heap from bottom to top, which ensures 
that the subtrees currently established are all the smallest heaps.*/
void BuildMinHeap(MinHeap h){
    int i;
    for(i=h->size/2;i>=1;i--){
        FixDown(h,i);
    }
}
//Determine whether the MinHeap is empty
int Empty(MinHeap h){
    return h->size==0;
}
//Return and delete the minimum value of the minimum heap (that is, the head node), and keep the tree as the minimum heap
/*Move the last node to the head node, and size--,
Because the subtrees are all the smallest heap at this time, filtering directly 
down can ensure that the tree is still the smallest heap*/
int PopMinHeap(MinHeap h){
    if(Empty(h)){
        printf("The minimum heap is empty, and the popped -11111 is an invalid value\n");
        return -11111;
    }
    int result=h->data[1];
    h->data[1]=h->data[(h->size)--];
    //向下过滤
    FixDown(h,1);
    return result;
}
/*Insert node, keep minimum heap*/
void PushMinHeap(MinHeap h,int val){
    if(h->size==h->Capacity){
        printf("The minimum heap is full and element insertion is invalid\n");
        return;
    }
    h->data[++(h->size)]=val;
    //向上过滤
    int child=h->size;
    int parent;
    for(;child>1;child=parent){
        parent=child/2;
        if(h->data[parent]>val){
            h->data[child]=h->data[parent];
        }
        else
        {
            break;
        }
        
    }
    h->data[child]=val;
}
/*Request space for the MinHeap*/
MinHeap CreateMinHeap(int MinHeapSize){
    MinHeap h=(MinHeap)malloc(sizeof(MinHeap));
    h->data=(int*)malloc((MinHeapSize+1)*sizeof(int));
    h->size=0;
    h->Capacity=MinHeapSize;
    return h;
}
/*Free up space for MinHeap*/
void CleanMinHeap(MinHeap h){
    free(h->data);
    free(h);
}
int main()
{
    MinHeap h=CreateMinHeap(MaxSize);

    //Construct the MinHeap with a random array of 20 numbers, and pop the MinHeap number in turn
    printf("Construct the MinHeap with a random array of 20 numbers\n");
    srand((unsigned)time(NULL));
    int i=1;
    printf("20 random numbers:\n");
    for(;i<=20;i++){
        h->data[i]=getRandomNum();
        printf("%d ",h->data[i]);
        h->size++;
    }
     printf("\n");
    BuildMinHeap(h);
    //After the minimum heap is established, pop the element
    printf("After the minimum heap is established, pop the element:\n");
    while(!Empty(h)){
        printf("%d ",PopMinHeap(h));
    }
     printf("\n");


    //Randomly insert 10 elements
    int randNum;
    printf("10 random numbers inserted in sequence:\n");
    for(i=1;i<=10;i++){
        randNum=getRandomNum();
        printf("%d ",randNum);
        PushMinHeap(h,randNum);
    }
    printf("\n");
    //while the minimum heap is not empty, pop the element
    printf("After the insertion, pop the element:\n");
    while(!Empty(h)){
        printf("%d ",PopMinHeap(h));
    }
     printf("\n");
    CleanMinHeap(h);
    return 0;
}
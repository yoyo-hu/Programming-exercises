#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MaxSize 100
typedef struct Hnode* MaxHeap;
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
/*Filter down and find the proper position of the node on the premise that all subtrees are the MaxHeap. 
The tree with this node as the root node is a smallest heap*/
void FixDown(MaxHeap h,int index){
    int parent;
    int child;
    int temp=h->data[index];
    for(parent=index;parent*2<=h->size;parent=child){
        child=parent*2;
        if(child+1<=h->size&&h->data[child+1]>h->data[child])
            child++;
        if(h->data[child]>temp){
            h->data[parent]=h->data[child];
        }
        else break;
    }
    h->data[parent]=temp;
}
/*The idea of recursion is adopted to establish the minimum heap from bottom to top, which ensures 
that the subtrees currently established are all the smallest heaps.*/
void BuildMaxHeap(MaxHeap h){
    int i;
    for(i=h->size/2;i>=1;i--){
        FixDown(h,i);
    }
}
//Determine whether the MinHeap is empty
int Empty(MaxHeap h){
    return h->size==0;
}
//Return and delete the max value of the max heap (that is, the head node), and keep the tree as the max heap
/*Move the last node to the head node, and size--,
Because the subtrees are all the MaxHeap at this time, filtering directly 
down can ensure that the tree is still the MaxHeap*/
int PopMaxHeap(MaxHeap h){
    if(Empty(h)){
        printf("The MaxHeap is empty, and the popped -11111 is an invalid value\n");
        return -11111;
    }
    int result=h->data[1];
    h->data[1]=h->data[(h->size)--];
    //向下过滤
    FixDown(h,1);
    return result;
}
/*Insert node, keep MaxHeap*/
void PushMaxHeap(MaxHeap h,int val){
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
        if(h->data[parent]<val){
            h->data[child]=h->data[parent];
        }
        else
        {
            break;
        }
        
    }
    h->data[child]=val;
}
/*Request space for the MaxHeap*/
MaxHeap CreateMaxHeap(int MaxHeapSize){
    MaxHeap h=(MaxHeap)malloc(sizeof(MaxHeap));
    h->data=(int*)malloc((MaxHeapSize+1)*sizeof(int));
    h->size=0;
    h->Capacity=MaxHeapSize;
    return h;
}
/*Free up space for MinHeap*/
void CleanMaxHeap(MaxHeap h){
    free(h->data);
    free(h);
}
int main()
{
    MaxHeap h=CreateMaxHeap(MaxSize);

    //Construct the MaxHeap with a random array of 20 numbers, and pop the MaxHeap number in turn
    printf("Construct the MaxHeap with a random array of 20 numbers\n");
    srand((unsigned)time(NULL));
    int i=1;
    printf("20 random numbers:\n");
    for(;i<=20;i++){
        h->data[i]=getRandomNum();
        printf("%d ",h->data[i]);
        h->size++;
    }
     printf("\n");
     int realSize=h->size;//数组的真实尺寸
    BuildMaxHeap(h);
    //After the MaxHeap is established, pop the element
    /*Create a sorted array by repeatedly deleting the largest 
    element from the heap (the root of the heap) and then inserting it into the array*/
    printf("After the MaxHeap is established, pop the element:\n");
    for(i=realSize;i>0;i--){
         h->data[i]=PopMaxHeap(h);
        printf("%d ", h->data[i]);
    }
    printf("\nAfter sorting the heap, output the result of the ordered array from small to large:\n");
    for(i=1;i<=realSize;i++){
        printf("%d ",h->data[i]);
    }
    CleanMaxHeap(h);
    return 0;
}
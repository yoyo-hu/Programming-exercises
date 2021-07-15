#include <stdio.h>
#include <stdlib.h>
#define MaxSize 8
typedef struct Hnode* MinHeap;
struct Qnode{
    int val;
    struct Qnode* next;
};
typedef struct Queue{
    struct Qnode*head;
    struct Qnode*rear;
}Queue;
struct Hnode{
    struct Qnode* data[9];
    int size;
    int Capacity;
};
/*Filter down and find the proper position of the node on the premise that all subtrees are the smallest heap. 
The tree with this node as the root node is a smallest heap*/
void FixDown(MinHeap h,int index){
    int parent;
    int child;
    struct Qnode* temp=h->data[index];
    for(parent=index;parent*2<=h->size;parent=child){
        child=parent*2;
        if(child+1<=h->size&&h->data[child+1]->val<h->data[child]->val)
            child++;
        if(h->data[child]->val<temp->val){
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
struct Qnode* PopMinHeap(MinHeap h){
    if(Empty(h)){
        //printf("The minimum heap is empty, and  pop NULL\n");
        return NULL;
    }
    struct Qnode* result=h->data[1];
    h->data[1]=h->data[(h->size)--];
    //向下过滤
    FixDown(h,1);
    return result;
}
/*Insert node, keep minimum heap*/
void PushMinHeap(MinHeap h,struct Qnode* NewNode){
    if(h->size==h->Capacity){
        printf("The minimum heap is full and element insertion is invalid\n");
        return;
    }
    h->data[++(h->size)]=NewNode;
    //向上过滤
    int child=h->size;
    int parent;
    for(;child>1;child=parent){
        parent=child/2;
        if(h->data[parent]->val>NewNode->val){
            h->data[child]=h->data[parent];
        }
        else
        {
            break;
        }
        
    }
    h->data[child]=NewNode;
}
/*Free up space for MinHeap*/
void CleanMinHeap(MinHeap h){
    free(h);
}
void InitQueue(Queue*q){
    q->head=NULL;
    q->rear=NULL;
}
void InsertQueue(Queue*q,int val){
    struct Qnode*node=(struct Qnode*)malloc(sizeof(struct Qnode));
        node->next=NULL;
        node->val=val;
    if(q->head==NULL){
        q->head=node;
        q->rear=node;
    }
    else {
        q->rear->next=node;
        q->rear=node;
    }
}
void M_Merge(Queue*result,MinHeap h){
    while(1){
    struct Qnode* MinNode=PopMinHeap(h);
    if(MinNode==NULL)break;
    if(MinNode->next!=NULL)PushMinHeap(h,MinNode->next);
    InsertQueue(result,MinNode->val);
    }
}
void DeleteQueue(Queue*q){
    struct Qnode* temp=q->head;
    while(temp!=NULL){
        temp=q->head->next;
        free(q->head);
        q->head=temp;
    }
}
int main()
{
    //用数组的方法实现最小堆
    MinHeap h=(struct Hnode*)malloc(sizeof(struct Hnode));
    h->size=0;
    h->Capacity=MaxSize;
    Queue* q=(Queue*)malloc(sizeof(Queue)*(MaxSize+1));
    int SumOfnum=0;
    // 输入8个有序队列
    int n;//用来临时存储有序队列中元素的个数
    for(int i=0;i<8;i++){
        //printf("请输入第i个有序队列的个数：");
        scanf("%d",&n);
        SumOfnum+=n;
        int temp;
        InitQueue(&(q[i]));
        for(int j=0;j<n;j++){
            scanf("%d",&temp);
           InsertQueue(&(q[i]),temp);
        }
    }
    //用指针的方法实现队列
    //Construct the MinHeap with 每个队列的首字母

    for(int i=0;i<8;i++){
        if(q[i].head!=NULL)
            h->data[++h->size]=q[i].head;
    }
    BuildMinHeap(h);
    //After the minimum heap is established, pop the element
    Queue* result=(Queue*)malloc(sizeof(Queue));
    InitQueue(result);
    M_Merge(result,h);
    struct Qnode* temp=result->head;
        while(temp!=NULL){
            printf("%d ",temp->val);
            temp=temp->next;
        }
    return 0;
    CleanMinHeap(h);
    for(int i=0;i<8;i++){
        DeleteQueue(&q[i]);
    }
    free(q);
    DeleteQueue(result);
    free(result);
}
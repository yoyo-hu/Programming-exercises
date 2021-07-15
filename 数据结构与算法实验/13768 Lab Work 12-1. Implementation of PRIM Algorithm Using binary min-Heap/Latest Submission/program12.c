#include <stdio.h>
#include <stdlib.h>
#define INFINITY 11111111
#define VNUM 8
#define error -1
typedef struct Hnode* MinHeap;
struct Hnode{
    int* data;
    int size;
    int Capacity;
};
typedef struct edge* PtrToedge;
struct edge{
    int val;
    int v1;
    int v2;//用下标表示顶点
};
typedef struct AdjacencyPoint* PtrToContactPoint;
struct AdjacencyPoint{
    int Subscript;
    int weight;
    PtrToContactPoint next;
};
struct Vnode{
    PtrToContactPoint head;
    int data;
};
typedef struct Graph* PtrToGraph;
struct Graph{
    int ENum;
    int Vnum;
    struct Vnode *AdjacencyList; 
};
/*Filter down and find the proper position of the node on the premise that all subtrees are the smallest heap. 
The tree with this node as the root node is a smallest heap*/
void FixDown(MinHeap h,int index,int*dis){
    int parent;
    int child;
    int temp=h->data[index];
    for(parent=index;parent*2<=h->size;parent=child){
        child=parent*2;
        if(child+1<=h->size&&dis[h->data[child+1]]<dis[h->data[child]])
            child++;
        if(dis[h->data[child]]<dis[temp]){
            h->data[parent]=h->data[child];
        }
        else break;
    }
    h->data[parent]=temp;
}
/*The idea of recursion is adopted to establish the minimum heap from bottom to top, which ensures 
that the subtrees currently established are all the smallest heaps.*/
void ReBuildMinHeap(MinHeap h,int*dis){
    int i;
    for(i=h->size/2;i>=1;i--){
        FixDown(h,i,dis);
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
int PopMinHeap(MinHeap h,int*dis){
    if(Empty(h)){
        //printf("The minimum heap is empty, and the popped -11111 is an invalid value\n");
        return error;
    }
    int result=h->data[1];
    h->data[1]=h->data[(h->size)--];
    //向下过滤
    FixDown(h,1,dis);
    return result;
}
/*Insert node, keep minimum heap*/
void PushMinHeap(MinHeap h,int val,int*dis){
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
        if(dis[h->data[parent]]>dis[val]){
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
MinHeap CreateMinHeap(int MinHeapSize,int*dis){
    MinHeap h=(MinHeap)malloc(sizeof(MinHeap));
    h->data=(int*)malloc((MinHeapSize+1)*sizeof(int));
    h->size=0;
    h->Capacity=MinHeapSize;
    for(int i=0;i<MinHeapSize;i++){
        PushMinHeap(h,i,dis);
    }
    return h;
}
/*Free up space for MinHeap*/
void CleanMinHeap(MinHeap h){
    free(h->data);
    free(h);
}
PtrToGraph InitGraph(int Vnum){
    PtrToGraph G=(PtrToGraph)malloc(sizeof(struct Graph));
    G->Vnum=Vnum;
    G->ENum=0;
    G->AdjacencyList=(struct Vnode *)malloc(sizeof(struct Vnode)*Vnum);
    // 初始化邻接表头指针 
    for (int i=0; i<G->Vnum; i++)
        G->AdjacencyList[i].head= NULL;
        return G;
}    
void InsertEdge( PtrToGraph G, PtrToedge e )
{
    PtrToContactPoint NewNode1=(PtrToContactPoint)malloc(sizeof(struct AdjacencyPoint));
    //将V2插入V1的表头 
    NewNode1->Subscript = e->v2;
    NewNode1->next=G->AdjacencyList[e->v1].head;
    NewNode1->weight = e->val;
    G->AdjacencyList[e->v1].head = NewNode1;
        
    //图为无向图，还要将V1插入V2的表头 
    PtrToContactPoint NewNode2=(PtrToContactPoint)malloc(sizeof(struct AdjacencyPoint));
    //将V2插入V1的表头 
    NewNode2->Subscript = e->v1;
    NewNode2->next=G->AdjacencyList[e->v2].head;
    NewNode2->weight = e->val;
    G->AdjacencyList[e->v2].head = NewNode2;
}

int BuildGraph(PtrToGraph G)
{
    printf("Enter the number of edges\n");
    scanf("%d", &(G->ENum));//输入边数
    if ( G->ENum != 0 ) { //如果有边
        PtrToedge e=(PtrToedge)malloc(sizeof(struct edge));
        //分别输入边的两个起点下标，终点下标和权重
        for (int i=0; i<G->ENum; i++) {
        scanf("%d%d%d",&e->v1,&e->v2,&e->val);
        InsertEdge(G,e);
        }
        free(e);
    } 
    if(G->ENum<G->Vnum-1){
        printf("Too few edges to generate minimum spanning tree");
        return 0;
    }//无法生成最小生成树
    return 1;

    // /* 如果顶点有数据的话，读入数据 */
    // for (int i=0; i<G->Vnum; i++) 
    //     scanf(" %c", &(G->AdjacencyList[i].data));
}
void CleanGraph(PtrToGraph G){
    free(G->AdjacencyList);
    free(G);
}
void Prim(PtrToGraph G,PtrToGraph MST){
    int dis[VNUM];//每个点距离GResult的最小距离；
    int parent[VNUM];//每个点在最小生成树MST中的父节点
    for(int i=0;i<VNUM;i++){
        dis[i]=INFINITY;
    }
    //构造最小堆
    //依次插入节点下标，并按照dis进行最小堆的排序
    MinHeap h=CreateMinHeap(G->Vnum,dis);
    //收录第一个点；
    dis[0]=0;//收录进来的点距离GResult的最小距离为0；
    //更新距离
    PtrToContactPoint temp=G->AdjacencyList[0].head;
    while(temp!=NULL){
        dis[temp->Subscript]=temp->weight;
        parent[temp->Subscript]=0;//由0衍生到达，故父节点为0
        temp=temp->next;
        
    }
    ReBuildMinHeap(h,dis);
    while(1){
        //采用最小堆的方法找到未收入端点到MST的最小距离
        int index=PopMinHeap(h,dis);
        if(dis[index]==0)index=PopMinHeap(h,dis);//需为未收入端点
        if(index==error)break;//此时所有可找的表都已经找完
        PtrToedge e=(PtrToedge)malloc(sizeof(struct edge));
        e->v1=index;
        e->v2=parent[index];
        e->val=dis[index];
        InsertEdge(MST,e);
        //收入点index，并更新各个点的dis值
        dis[index]=0;
        PtrToContactPoint tmp=G->AdjacencyList[index].head;
        while(tmp!=NULL){
            if( dis[tmp->Subscript]>tmp->weight){
                dis[tmp->Subscript]=tmp->weight;
                parent[tmp->Subscript]=index;//由index衍生到达，故父节点为index
                }
            tmp=tmp->next;
        }
        ReBuildMinHeap(h,dis);
    }
}
void Print(PtrToGraph MST){
    for(int i=0;i<MST->Vnum;i++){
        PtrToContactPoint temp=MST->AdjacencyList[i].head;
        printf("%d",i);
        while(temp!=NULL){
            printf("->%d",temp->Subscript);
            temp=temp->next;
        }
        printf("\n");
    }
}
int main()
{   
    int n;//节点数
    printf("Enter the number of nodes\n");
    scanf("%d",&n);
    if(n==0)return 0;
    PtrToGraph G=InitGraph(n);
    int IfBuildGraph=BuildGraph(G);
    if(IfBuildGraph==0){
        CleanGraph(G);
        return 0;
    }//无法生成最小生成树
    PtrToGraph GResult=InitGraph(n);
    printf("Print the graph as an adjacency list:\n");
    Print(G);
    Prim(G,GResult);
    printf("Print the minimum spanning tree in the form of adjacency list:\n");
    Print(GResult);//以邻接表的形式打印最小生成树；
    CleanGraph(G);
    CleanGraph(GResult);
    return 0;
}
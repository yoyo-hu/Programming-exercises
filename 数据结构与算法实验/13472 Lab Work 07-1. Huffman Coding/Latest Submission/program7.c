#include <stdio.h>
#include <stdlib.h>
typedef struct TreeNode*Huffman;
typedef  struct TreeNode** heap;
struct TreeNode
{
    int data;
    Huffman left;
    Huffman right;
};
//向下过滤，在子树都为最小堆的前提下，找到节点的合适位置，是以该节点为根节点的树是一个最小堆
void FixDown(heap h,int size,int index){
    int parent;
    int child;
    Huffman temp=h[index];
    for(parent=index;parent*2<=size;parent=child){
        child=parent*2;
        if(child+1<=size&&h[child+1]->data<h[child]->data)
            child++;
        if(h[child]->data<temp->data){
            h[parent]=h[child];
        }
        else break;
    }
    h[parent]=temp;
}
//采用递归的思想，从下往上建立最小堆，保证了目前所建树的子树都为最小堆。
void BuildMinHeap(heap h,int size){
    for(int i=size/2;i>=1;i--){
        FixDown(h,size,i);
    }
}
//返回并删除最小堆的最小值（即头节点），保持树仍为最小堆
/*将最后一个节点挪动到头节点处，并size--，
因为此时子树均为最小堆，直接向下过滤即可保证该树仍为最小堆*/
Huffman PopMinHeap(heap h,int* size){
    Huffman result=h[1];
    h[1]=h[(*size)--];
    //向下过滤
    FixDown(h,*size,1);
    return result;
}
//插入节点值，保持树仍为最小堆
/**/
void InsertMinHeap(heap h,int* size,Huffman node){
    h[++(*size)]=node;
    //向上过滤
    int child=*size;
    int parent;
    for(;child>1;child=parent){
        parent=child/2;
        if(h[parent]->data>node->data){
            h[child]=h[parent];
        }
        else
        {
            break;
        }
        
    }
    h[child]=node;
}
//建立哈夫曼树
Huffman BuildHuffman(heap h,int size){
    Huffman node=(Huffman)malloc(sizeof(struct TreeNode));
    Huffman fristNode,lastNode;
    int time=size-1;
    for(int i=0;i<time;i++){//进行size-1次合并
        fristNode=PopMinHeap(h,&size);
        lastNode=PopMinHeap(h,&size);
        Huffman node=(Huffman)malloc(sizeof(struct TreeNode));
        node->data=fristNode->data+lastNode->data;
        node->left=fristNode;
        node->right=lastNode;
        InsertMinHeap(h,&size,node);
    }
    return PopMinHeap(h,&size);
    
}
//以“结点值（左子树）（右子树）“的形式打印树，证明它是哈夫曼树
void print(Huffman h){
    if(h){
        printf("%d(",h->data);
        print(h->left);
        printf(")(");
        print(h->right);
        printf(")");
    }
}
//释放哈弗曼树空间
void deleteHuff(Huffman h){
    if(h){
        deleteHuff(h->left);
        deleteHuff(h->right);
        free(h);
    }
}
//采用深搜的方法打印所有的哈夫曼编码
void getHuffmanCode(Huffman h,char* codeStore,int* index){
    if(!h)return;
    if(h->left==NULL&&h->right==NULL){
        printf("\n%d's HuffmanCode:",h->data);
        codeStore[*index]='\0';
        printf("%s",codeStore);
    }
    else{
        codeStore[(*index)++]='0';
        getHuffmanCode(h->left,codeStore,index);
        --(*index);//回溯
        codeStore[(*index)++]='1';
        getHuffmanCode(h->right,codeStore,index);
        --(*index);//回溯
    }
}
int main() {
    int n;//输入序列的个数；
    printf("Please enter the number of sequences:\n");
    scanf("%d",&n);
    heap MinHeap=(heap)malloc(sizeof(struct TreeNode*)*(2*n));//保证堆有足够的空间
    //建立最小堆
    printf("Please enter the sequence one by one:\n");
    for(int i=1;i<=n;i++){
        MinHeap[i]=(Huffman)malloc(sizeof(struct TreeNode));
        scanf("%d",&MinHeap[i]->data);
        MinHeap[i]->left=NULL;
        MinHeap[i]->right=NULL;
    }
    BuildMinHeap(MinHeap,n);
    // for(int i=1;i<=n;i++){
    //     printf("%d ",MinHeap[i]->data);
    // }
    //建立哈夫曼树
    Huffman huff=BuildHuffman(MinHeap,n);
    //打印哈夫曼树，格式为“父结点（左子树）（右子树）"以证明其为哈夫曼树
    printf("Print Huffman Tree\n");
    print(huff);
    //输出所有原输入数的哈夫曼编码
    printf("\nOutput the Huffman code of all original input numbers");
    char* codeStore=(char*)malloc(sizeof(char)*n);
    int index=0;
    getHuffmanCode(huff,codeStore,&index);
    free(codeStore);
    //内存释放工作
    free(MinHeap);
    deleteHuff(huff);
    return 0;
}
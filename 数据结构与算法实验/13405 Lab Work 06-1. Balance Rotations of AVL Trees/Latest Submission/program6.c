#include <stdio.h>
#include <stdlib.h>
struct ALVnode
{
    int val;
    struct ALVnode* left;
    struct ALVnode* right;
    int high;
};
typedef struct ALVnode* ALV;
int getHigh(ALV tree){
    if(!tree) return 0;
    int i=getHigh(tree->left);
    int j=getHigh(tree->right);
    return i>j?i+1:j+1;
}
/*将root与其左节点做左单旋（右转），因为root和其左节点的树高发生改变
，于是需要更新两者的高度，将根结点指向新的根节点（即左节点）并返回*/
ALV LeftLeft(ALV root){
    ALV temp=root;
    root=root->left;
    temp->left=root->right;
    root->right=temp;
    //更新树高
    temp->high=getHigh(temp);
    root->high=getHigh(root);
    return root;
}
/*将root与其右节点做右单旋（左转），因为root和其左节点的树高发生改变
，于是需要更新两者的高度，将根结点指向新的根节点（即右节点）并返回*/
ALV RightRight(ALV root){
    ALV temp=root;
    root=root->right;
    temp->right=root->left;
    root->left=temp;
    //更新树高
    temp->high=getHigh(temp);
    root->high=getHigh(root);
    return root;
}
/*将root的左子树进行右单旋可以使插入结点转移到左子树的左子树上，此时再进行root整体的左单旋*/
ALV LeftRight(ALV root){
    root->left=RightRight(root->left);
    root=LeftLeft(root);
    return root;
}
/*将root的右节点进行左单旋可以使插入结点转移到右子树的右子树上，此时再进行root整体的右单旋*/
ALV RightLeft(ALV root){
    root->right=LeftLeft(root->right);
    root=RightRight(root);
    return root;
}
ALV insert(ALV root,int val){
    if(root==NULL){//此时val是第一个数
        struct ALVnode*newNode=(struct ALVnode*)malloc(sizeof(struct ALVnode));
        newNode->val=val;
        newNode->high=1;
        newNode->left=NULL;
        newNode->right=NULL;
        root=newNode;//root指向新节点
    }
    else{
        //数值大于root的值插入到右边，小于插入到左边，等于插入无效（无法插入）
        if(val<root->val){
            root->left=insert(root->left,val);
            if((root->right==NULL&&root->left->high==2)||(root->right!=NULL&&root->left->high-root->right->high==2)){
                if(val<root->left->val)
                    root=LeftLeft(root);//左单旋
                else
                {
                    root=LeftRight(root);//左右双旋
                }
                
            }
        
        }
        else if(val>root->val){
            root->right=insert(root->right,val);
            if((root->left==NULL&&root->right->high==2)||(root->left!=NULL&&root->left->high-root->right->high==-2)){
                if(val<root->right->val)
                    root=RightLeft(root);//右左双旋
                else
                {
                    root=RightRight(root);//右单旋
                }
                
            }
        }
        //更新树高
        root->high=getHigh(root);
    }
    return root;
}
/*回收树的内存*/
void clear(ALV root){
    if(!root)return;
    clear(root->left);
    clear(root->right);
    free(root);
}
//以“结点值（左子树）（右子树）“的形式打印树，证明它是AVL树
void print(ALV root){
    if(!root)return;
    printf("%d",root->val);
    printf("(");
    print(root->left);
    printf(")");
    printf("(");
    print(root->right);
    printf(")");
}
int main(){
    int num;//要插入的结点数目
    ALV head=NULL;
    scanf("%d",&num);
    int temp;//用来存储要插入的数
    for(int  i=0;i<num;i++){
        scanf("%d",&temp);
        head=insert(head,temp);
    }
    //以“结点值（左子树）（右子树）“的形式打印树，证明它是AVL树
    print(head);
    clear(head);
    return 0;
}

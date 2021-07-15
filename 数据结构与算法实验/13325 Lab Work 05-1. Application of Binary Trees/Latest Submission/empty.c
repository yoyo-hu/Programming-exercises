#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Maxsize 100;
struct TreeNode{
  char val;
  struct TreeNode* left;
  struct TreeNode* right;
};
struct TreeNode* creatTree(char inputTree[100],int index){
    int len=strlen(inputTree);
    if(len<=0)return NULL;
    if(inputTree[index]=='-')return NULL;
    struct TreeNode*head=(struct TreeNode*)malloc(sizeof(struct TreeNode));
    head->val=inputTree[index];
    if(index*2+1<len){
      head->left=creatTree(inputTree,index*2+1);
    }
    else{
      head->left=NULL;
    }
    if(index*2+2<len){
      head->right=creatTree(inputTree,index*2+2);
    }
    else{
      head->right=NULL;
    }
    return head;
}
void postOrderPrint(struct TreeNode* root){
  if(root){
      postOrderPrint(root->left);
      postOrderPrint(root->right);
      printf("%c ",root->val);
  }
}
struct TreeNode* changeToLCRS(struct TreeNode*root){
    if(!root)return NULL;
    if(root->left!=NULL){
      changeToLCRS(root->left);
      root->left->right=changeToLCRS(root->right);
      root->right=NULL;
    }
    else{
      root->left=changeToLCRS(root->right);
      root->right=NULL;
    }
    return root;
}
void inOrderPrint(struct TreeNode* root){
  if(root){
      inOrderPrint(root->left);
      printf("%c ",root->val);
      inOrderPrint(root->right);
  }
}
void delete( struct TreeNode*root){
  if(!root)return;
  delete(root->left);
  delete(root->right);
  free(root);
}
int main(){
  char inputTree[100];
  //输入说明：输入格式为层序遍历的数组(以字符串的形式输入），树存储的内容为单个字符,其中用‘-’表示NULL；
  printf("请以指定的方式输入树：");
  scanf("%s",inputTree);
  struct TreeNode* tree=creatTree(inputTree,0);
  printf("后序遍历输出的正常树序列：");
  postOrderPrint(tree);
  struct TreeNode* LCRS=changeToLCRS(tree);
  printf("\n");
   printf("中序遍历输出的LCRS树序列：");
  inOrderPrint(LCRS);
  delete(LCRS);
  return 0;
}
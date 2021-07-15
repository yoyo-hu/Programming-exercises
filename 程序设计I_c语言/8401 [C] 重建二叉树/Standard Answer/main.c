#include <stdio.h>
#include "TreeNode.h"
#include "function.h"

void postOrder(TreeNode* root) {
 if (root == NULL) return ;
 postOrder(root->left);
 postOrder(root->right);
 printf("%d ", root->val);
}

int main() {
 int preOrder[100], inOrder[100];
 int size;
 scanf("%d", &size);
 for (int i = 0; i < size; ++i) {
  scanf("%d", &preOrder[i]);
 }
 for (int i = 0; i < size; ++i) {
  scanf("%d", &inOrder[i]);
 }

 TreeNode* root = reConstructBinaryTree(preOrder, inOrder, size);
 postOrder(root);
 printf("\n");
 deleteTree(root);
 root = NULL;
 return 0;
}

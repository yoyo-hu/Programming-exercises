#include "TreeNode.h"
#include <stdlib.h>

TreeNode* reConstructBinaryTree(int pre[], int in[], int size) {
    if (size == 0) return NULL;
 TreeNode* root = (TreeNode*)malloc(sizeof(TreeNode));
    root->val = pre[0];
    root->left = NULL;
    root->right = NULL;

    if (size == 1) return root;
    
    int i = 0;

    for (; i < size; i++) {
        if (in[i] == pre[0]) break;
    }
    if (i != size) {
        root->left = reConstructBinaryTree(pre+1, in, i);
        root->right = reConstructBinaryTree(pre+i+1, in+i+1, size-i-1);    
    }
    return root;
}

void deleteTree(TreeNode* root) {
    if (root == NULL) return ;
    deleteTree(root->left);
    deleteTree(root->right);
    free(root);
}

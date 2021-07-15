#include<stdio.h>
#include<stdlib.h>
#include "tree.h"

Node* init_root(int value) {
    Node *root = malloc(sizeof(Node));
    root->left = root->right = NULL;
    root->value = value;
    return root;
}
 
Node* create_node(int value) {
    Node *temp;
    temp = malloc(sizeof(Node));
    temp->left = temp->right = NULL;
    temp->value = value;
    return temp;
}
 
void insert_node(Node *p, int value) {
    if (value < p->value) {
        if (p->left == NULL) p->left = create_node(value);
        else insert_node(p->left, value);
    }
    if (value > p->value) {
        if (p->right == NULL) p->right = create_node(value);
        else insert_node(p->right, value);
    }
}
 
void traverse_tree_inorder(Node *p) {
    if (p->left != NULL) traverse_tree_inorder(p->left);
    printf("%d ", p->value);
    if (p->right != NULL) traverse_tree_inorder(p->right);
}
 
void recycle_nodes(Node *p) {
    if (p->left != NULL) recycle_nodes(p->left);
    if (p->right != NULL) recycle_nodes(p->right);
    free(p);
}

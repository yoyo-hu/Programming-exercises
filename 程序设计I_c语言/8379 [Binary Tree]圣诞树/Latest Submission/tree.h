#include<stdio.h>
#include<stdlib.h>
 
typedef struct Node {
    struct Node *left;
    struct Node *right;
    int value;
} Node;
Node* init_root(int value);
Node* create_node(int value);
void insert_node(Node *p, int value);
void traverse_tree_inorder(Node *p);
void recycle_nodes(Node *p);
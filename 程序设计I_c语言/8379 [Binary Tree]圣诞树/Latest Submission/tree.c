#include "tree.h"
Node* init_root(int value) {
	Node *p = (Node*)malloc(sizeof(Node));
	if (p) {
		p->value = value;
		p->left = NULL;
		p->right = NULL;
	}
	return p;
}
Node* create_node(int value) {
	Node* a = (Node*)malloc(sizeof(Node));
	if (a) {
		a->value = value;
		a->left = NULL;
		a->right = NULL;
	}
		return a;
}
void insert_node(Node* p, int value) {
	Node* temp = create_node(value);
	if (value < p->value) {
		if (p->left == NULL)
			p->left = temp;
		else
			insert_node(p->left, value);
	}
	else {
		if (p->right == NULL)
			p->right= temp;
		else
			insert_node(p->right, value);
	}
}
void traverse_tree_inorder(Node * p){
		if (p) {
			traverse_tree_inorder(p->left);
				printf("%d ", p->value);
			traverse_tree_inorder(p->right);
		}
	}
void recycle_nodes(Node* p) {
	if(p){
		recycle_nodes(p->left);
		recycle_nodes(p->right);
		free(p);}
}
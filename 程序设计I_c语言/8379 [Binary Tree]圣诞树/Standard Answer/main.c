#include <stdio.h>
#include <stdlib.h>
#include "tree.h"
 
int main(void) {
    int node_num, i = 0, temp;
    Node *root = NULL;
    scanf("%d", &node_num);
    while (i < node_num) {
        scanf("%d", &temp);
        if (i == 0) root = init_root(temp);
        else insert_node(root, temp);
        i++;
    }
    traverse_tree_inorder(root);
    printf("\n");
    recycle_nodes(root);
    return 0;
}

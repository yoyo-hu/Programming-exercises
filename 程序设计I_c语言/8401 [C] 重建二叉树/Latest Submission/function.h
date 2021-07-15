#include <stdlib.h>
#include <string.h>
#include "TreeNode.h"
#define N 100
TreeNode* reConstructBinaryTree(int*pre, int*in, int n) {
		int i = 0;
		int n1 = 0, n2 = 0;
		int m1 = 0, m2 = 0;
		TreeNode* node = NULL;
		int lpre[N], rpre[N];
		int lin[N], rin[N];
		if (n == 0)
		{
			return NULL;
		}
		node = (TreeNode*)malloc(sizeof(TreeNode));
		if (node == NULL)
		{
			return NULL;
		}
		memset(node, 0, sizeof(TreeNode));
		node->val = pre[0];
		for (i = 0; i < n; i++)
		{
			if ((i <= n1) && (in[i] != pre[0]))
			{
				lin[n1++] = in[i];
			}
			else if (in[i] != pre[0])
			{
				rin[n2++] = in[i];
			}
		}
		for (i = 1; i < n; i++)
		{
			if (i < (n1 + 1))
			{
				lpre[m1++] = pre[i];
			}
			else
			{
				rpre[m2++] = pre[i];
			}
		}
		node->left = reConstructBinaryTree(lpre, lin, n1);
		node->right= reConstructBinaryTree(rpre, rin, n2);

		return node;
	
}
void deleteTree(TreeNode* p) {
	if (p != NULL) {
		deleteTree(p->left);
		deleteTree(p->right);
		free(p);
	}
}
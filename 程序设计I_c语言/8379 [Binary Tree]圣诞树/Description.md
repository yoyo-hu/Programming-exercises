# [Binary Tree]圣诞树

搬运自eden
# Description
请完成下面四个函数的定义（在tree.h文件中），使整个程序能够利用排序二叉树的结构对输入的数*（不会出现相同的数）*，进行排序输出。节点的结构体在下面已给出，这个二叉树的特征是，左子树中所有节点的值肯定比父节点小，右子树所有节点的的值肯定比父节点的大。要求大家按照这个结构特征去构建二叉树，最后中序遍历输出就是我们要求的升序输出。

![](http://e.hiphotos.baidu.com/baike/w%3D268/sign=617e7a503af33a879e6d071cfe5d1018/203fb80e7bec54e78296e37eb9389b504fc26a5c.jpg)

树的节点结构体为：
```
typedef struct Node {
    struct Node *left;
    struct Node *right;
    int value;
} Node;
```

中序遍历这个二叉树，按照升序输出，每个数之间有一个空格，最后一个数后也有一个空格。
```
void traverse_tree_inorder(Node *p);
```
回收建立二叉树时开辟的内存空间，提示类似后序遍历。
```
void recycle_nodes(Node *p);
```
将一个值为value的数插入到这个树中，但是要注意，需要插到哪个地方，按照排序二叉树的要求来。
```
void insert_node(Node *p, int value);
```

创建一个根节点，初始化并返回。
```
Node* init_root(int value);
```

## sample input
```
5
23 3 53 333 2
```

## sample output
```
2 3 23 53 333 
```

## Hint
前置知识要求：数据结构二叉树，二叉树的中序遍历和后序遍历，递归函数设计，指针的使用，结构体。

知识介绍：

先序遍历：对一棵二叉树的前序遍历，先访问根结点，再访问左子树，然后访问右子树。
```
void preorder(Treenode *p) {
    if (p != NULL){
        visit(p);            //  visit泛指要对节点进行的操作
        preorder(p->left);
        preorder(p->right);
    }
}
```
中序遍历：对一棵二叉树的中序遍历，先访问左子树，再访问根结点，然后访问右子树。
```
void inorder(Treenode *p) {
    if (p != NULL){
        inorder(p->left);
        visit(p);            //  visit泛指要对节点进行的操作
        inorder(p->right);
    }
}
```
后序遍历：对一棵二叉树的后序遍历，先访问左子树，再访问右子树，然后访问根结点。
```
void postorder(Treenode *p) {
    if (p != NULL){
        postorder(p->left);
        postorder(p->right);
        visit(p);            //  visit泛指要对节点进行的操作
    }
}
```
## TA有话说
**Merry Chrismas~~~~~~**
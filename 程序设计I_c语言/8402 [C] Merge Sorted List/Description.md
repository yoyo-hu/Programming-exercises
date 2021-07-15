# [C] Merge Sorted List

## Description
任务：将两个有序链表合并成一个有序链表

例如，输入的两个链表为：

```
1->3->5->7->9->NULL
2->4->6->8->10->NULL
```
合并之后得到
```
1->2->3->4->5->6->7->8->9->10->NULL
```

你需要实现两个函数
* `void push_front(node** head, int val)`
	* 把 val 插入到链表的头部 
* `node* mergeSortedList(node* head1, node* head2)`
	* 参数：`head1`、`head2`分别是两个有序链表的头指针
	* 返回值：返回合并之后的新链表的头指针
	* 要求：不要申请新的内存，通过修改指针的值来使两个链表合并 

## Sample Input
```
5
9 7 5 3 1
5
10 8 6 4 2
```

## Sample Output
```
1->3->5->7->9->NULL
2->4->6->8->10->NULL
1->2->3->4->5->6->7->8->9->10->NULL
```

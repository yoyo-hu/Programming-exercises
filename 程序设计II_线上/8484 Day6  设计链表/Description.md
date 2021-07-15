# Day6  设计链表

# 设计链表

## 描述
小统是学校的一名学生，现在他没有链表，但是他想要一个链表。  
因为小统不懂什么是链表，所以需要懂链表的你帮他设计一个。  

小统昨晚梦到链表和它的的结点应该是这样的：
	
	//val>0
	typedef struct Node{
		int val;
		struct Node* next;
	}List;

而且链表应该具有一些功能，所以你要帮小统实现一些函数：
	
	//创建链表
	List* creatList();
	
	//通过下标获得结点，头结点的下标是1
	//如果成功获取结点值，返回该值
	//如果失败，返回0
	int getValue(List* myList,int index);
	
	//在头部添加结点
	void addAtHead(List* myList,int val);
	
	//在尾部添加结点
	void addAtTail(List* myList,int val);
	
	//在下标添加结点
	//添加成功返回1，添加失败返回0
	int addAtIndex(List* myList,int index,int val);
	
	//删除头部结点
	//删除成功返回1，删除失败返回0
	int deleteAtHead(List* myList);
	
	//删除下标结点
	//删除成功返回1，删除失败返回0
	int deleteAtIndex(List* myList,int index);
	
	//反转链表
	//请用常数的额外辅助空间
	void reverseList(List* myList);
	
	//打印链表
	//链表:0  1  2  3  4  5
	//格式:0->1->2->3->4->5->null
	void printList(List* myList);
	
	//释放链表空间
	void freeList(List* myList);

你只需实现链表功能就可以，小统会帮你调用的。不用谢(main函数被隐藏)
注意：本题中要求实现的链表为带有头结点的链表。

main函数中可能这样调用list.h中的函数：
	
	List* myList=creatList();
	addAtHead(myList,val);
	deleteAtHeada(myList);
	reverseList(myList);
	printList(myList);
	freeList(myList);
	
## 样例输入
	
	addHead
	1
	deleteHead
	deleteHead
	printList
	freeList

## 样例输出
	
	Added successfully.
	Deleted successfully.
	Deleted failed.
	null
	Freed successfully.
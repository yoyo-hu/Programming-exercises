# Day6 拷贝链表

# 拷贝链表
## 描述
小统只有一个链表，可是他还想要一个链表。  
但是他不会，请同学们帮帮忙拷贝一个链表。  
要对链表进行深拷贝。  

链表结点的结构：

	typedef struct ListNode{
		int val;
		struct ListNode* next;
		struct ListNode* random;
	}ListNode;
	
	//链表发生了一点变化
	//每个结点除了指向下一个结点，还会随机指向一个结点。
	
只用实现一个函数：

	ListNode* copyList(ListNode* head){
		//try to code your bug
	}
	
main函数被隐藏
## 样例输入
第一行是结点数量n,0<=n<=50  
第二行是n个结点的值   
第三行是m个结点有随机指针，0<=m<=n<=50   
接下来m行包含两个数字，随机指针从第一个下标的结点指向第二个下标的结点

### input

	4
	0 1 2 3
	2
	0 1
	1 0

### output

	DeepCopy:
	index0: true
	index1: true
	index2: true
	index3: true
	PrintList:
	0(1)->1(0)->2(null)->3(null)->null
	
## 深拷贝和浅拷贝
浅拷贝只需要复制对象地址，而深拷贝需要创建新的对象  
如图：  
a是一个对象，p是指向a的指针，p1是拷贝的指针  
浅拷贝中p1只需要存储a的地址  
深拷贝中要先创建新的对象，p1指向新对象的地址

![3NYrNR.jpg](https://s2.ax1x.com/2020/02/26/3NYrNR.jpg)
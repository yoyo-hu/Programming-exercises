# Day14 链表的环

# 链表的环

## 描述
小统有一条链表，这根链表有时会缠起来，变成一个有环的链表   
小统想知道这个链表是不是有环，假如有环，就找到环的入口结点，请你帮帮他

你需要实现三个函数：

	//假如有环就返回1
	//没有就返回0
	int hasRing(ListNode* head);
	
	//返回链表中环入口结点的值
	//该函数只有在链表有环的情况下才会被调用
	int entryVal(ListNode* head);
	
	//返回链表中环结点的数量
	//该函数只有在链表有环的情况下才会被调用
	int nodeNumber(ListNode* head);

链表中结点的值都是唯一的，不会出现两个值相同的结点。   

## 输入
	
	0->1->2->3->1
	
## 输出

	true    //hasRing
	1       //entryVal
	3       //nodeNumber
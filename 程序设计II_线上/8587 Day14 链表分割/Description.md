# Day14 链表分割

# 链表分割
## 描述
小统想要把他的链表变成两段，但是他不会  
需要你帮帮他

本题需要实现三个函数，以三种方式分割链表：  
	
	//该函数分割方式为:平均分割
	//奇数个结点前面长度大于后面
	ListNode** splitList1(ListNode* head);
	
	//例:0->1->2->3->null  变成list1:0->1->null,list2:2->3->null   
	//例:0->1->2->null     变成list1:0->1->null,list2:2->null
	
	//该函数分割方式为:从倒数第k个结点处分割
	//一定会有k个结点
	ListNode** splitList2(ListNode* head,int k);
	//例:0->1->2->null k=1  变成list1:0->1->null,list2:2->null
	//例:0->1->2->null k=3  变成list1:null,list2:0->1->2->null
	
	//该函数分割方式为:大于x的结点分到list1,小于等于x的结点分到list2
	ListNode** splitList3(ListNode* head,int x);
	//例:0->1->2->null x=1  变成list1:2->null,list2:0->1->null
	//例:0->1->2->null x=2  变成list1:null,list2:0->1->2->null
	
提醒：各结点分割后还要保持在原链表中的顺序    
提醒：请使用原链表中的结点，不要新建结点  

## 输入

	0->1->2->3->null
	k=2
	x=2

## 输出

	split1: 
	list1:0->1->null
	list2:2->3->null
	
	split2:
	list1:0->1->null
	list2:2->3->null
	
	split3:
	list1:3->null
	list2:0->1->2->null
	

##提示

大家用用头插法和双指针，很简单，都讲过   
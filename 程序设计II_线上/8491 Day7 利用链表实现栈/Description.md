# Day7 利用链表实现栈

# Stack with List

昨天我们帮小统实现了链表和它的基本操作，今天我们尝试使用链表来实现一个简单的栈。

栈是一种线性的数据结构，其特点是后进先出(LIFO)，一个简易的栈包含如下操作：

```c
void InitiateStack(Stack*);		// 初始化栈
void push(Stack*, const int);	// 压栈(入栈)
void pop(Stack*);				// 弹栈(出栈)
int empty(const Stack*); 		// 判断栈是否为空
int top(const Stack*);			// 获取栈顶元素
int size(const Stack*); 		// 返回栈中元素数量
```

栈和链表节点的结构在`stack.h`文件中给出，请实现上述函数。

### 扩展

有兴趣的同学可以了解一下C++中的`std::stack`成员函数的调用方式和传入参数与C语言中有什么不同，体会一下类和结构体的区别。


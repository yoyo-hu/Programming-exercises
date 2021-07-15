# [Deep Copy] A Simple Stack Class

# 描述
完成一个栈类，栈的复制采用深拷贝规则。

```c++
#ifndef STACK_HPP
#define STACK_HPP

class Stack {
  struct node {
    int num;
    node* next;
    node() { num = 0; next = NULL; }
    node(int n, node* p = NULL) { num = n; next = p; }
  };

  node* data;
public:
  Stack();                        // 构造一个空栈
  Stack(const Stack&);            // 深拷贝
  ~Stack();                       // 注意内存回收

  void push(int);                 // 入栈
  void pop();                     // 出栈
  int top() const;                // 查看栈顶元素，若栈为空，返回0
  bool empty() const;             // 判断栈是否为空
  void clear();                   // 清空栈
};
#endif
```
#ifndef STACK_HPP
#define STACK_HPP

#include <stddef.h>

class Stack {
  struct node {
    int num;
    node* next;
    node() { num = 0; next = NULL; }
    node(int n, node* p = NULL) { num = n; next = p; }
  };

  node* data;
public:
  Stack();                        // ����һ����ջ
  Stack(const Stack&);            // ���
  ~Stack();                       // ע���ڴ����

  void push(int);                 // ��ջ
  void pop();                     // ��ջ
  int top() const;                // �鿴ջ��Ԫ��
  bool empty() const;             // �ж�ջ�Ƿ�Ϊ��
  void clear();                   // ���ջ
};

#endif

# [Pointer]扩充数组的方法

a# Description：

### 实现函数doubleCapacity，扩充数组的大小。

函数声明为：int * doubleCapacity(const int *list, int size, int addSize);  // size表示原来数组的大小，addSize表示扩充的大小，即扩充后的数组大小=size+addSize

例如，下面的代码的输出为：1 2 3 4 5 0 0 0 0 0 （扩充部分的数组值赋为0）

```c
int list[5] = {1,2,3,4,5};
int *newlist = doubleCapacity(list, 5, 5);
for(int i=0; i<5+5; i++)
  printf("%d "，newlist[i]);
```
 

# Hint

学习使用**[malloc](http://www.cplusplus.com/reference/cstdlib/malloc/)**手动申请内存
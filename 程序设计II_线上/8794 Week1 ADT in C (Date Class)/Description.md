# Week1 ADT in C (Date Class)

## Task
学习如何用C模仿C++的类：  
[How do you implement a class in C?](http://stackoverflow.com/questions/1403890/how-do-you-implement-a-class-in-c)  
根据给出的文件实现C中的“Date class”。
## Hints
先认真阅读上面的链接。  
`void DestroyDate(Date** p);` 中，传入Date**的作用是避免“空悬指针”问题。
## One more step
- 试试在client代码中直接访问或修改Date的year等变量，跟C++版本有何不同？这会与“封装”原则冲突吗？

- 仔细辨别`void SetDate(Date* date, int year, int month, int day)`和`void Date::setDate(int year, int month, int day);`两者的异同，
包括参数数量，参数类型，命名风格等（关于命名风格可参照前面提到的《Google C++ Style Guide》）。

- 大胆猜想早期C++编译器是如何把C++程序转换为C程序的。另外，本题只是一种思路，有兴趣可以进一步了解

- 这种做法有必要吗？请查阅资料了解其应用场景。

- 如果`void DestroyDate(Date** p);` 传入Date*，可行吗？可能会导致什么问题？

- 为什么要把free()封装到Destroy()里？直接让client代码调用free()合适吗？

- 内存资源释放要求调用者调用`Destroy*`，可能会有什么问题？有兴趣的同学可以了解C++的解决方案（需要超前学习，选做）。

- 如果调用者写出`date2 = date1`这种代码，即两个指针指向同个“对象”，在内存资源释放上会有问题吗？有兴趣的同学可以了解C++的解决方案（需要超前学习，选做）。
## Links
- [编辑器推荐：vscode](https://code.visualstudio.com/)
# Week2 [Constructor and Destructor]use constructor and destructor in class 

实现简单的array类，在构造函数中申请内存空间，在析构函数中释放内存空间。

类声明如下：
```
class ARRAY
{
public:
	ARRAY(int initLenght); //构造函数
	~ARRAY();                     //析构函数
private:
	int Length;
	float* p;
};

```

输入：无输入

输出：

100 bytes have already allocated. 
This is the end of the program and the object will be destroyed.
100 bytes have been released. Bye.


此输出为固定输出，只要编写的函数没有语法错误就行。

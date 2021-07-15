# Week1 Complex

# Complex

在C++中实现一个复数结构体，并实现相应的构造函数和析构函数。

C++中结构体与C的区别：

- 拥有继承关系，可以定义`public`，`private`，`protected`等类型的数据成员，可以有虚函数等；
- 可以直接定义一些简单的函数，如构造函数，运算符重载等；
- 无需`struct`关键字即可直接使用结构体名定义新的对象。

本题要求实现一个复数结构体，其成员如下：

```c++
struct Complex {
	int r;
	int i;
	Complex();
	Complex(int r_, int i_);
    ~Complex();
};
```

以及函数：

```c++
double Distanceof(const Complex& c1, const Complex& c2);
```

返回两个复数对应的复平面上的点$p_1, p_2$的距离。

要求在调用`Complex()`时，将实部和虚部都初始化为$0$，并输出以下内容：

```
Create an empty complex.
```

在调用`Complex(int, int)`时，将实部和虚部分别初始化$r, i$，并输出以下内容：

```
Create an complex whose real is r, image is i.
```

在调用析构函数时，输出：

```
Destroy an complex whose real is r, image is i.
```



## Hint

在结构体或类外定义(实现)相关函数时，需要指出该函数是属于哪个结构体(类)的，请查阅构造函数，析构函数，域作用符的相关知识。


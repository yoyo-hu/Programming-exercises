# Week1 Complex Class

# Complex Class

实现一个复数类，其结构如下：

```c++
class Complex {
	int r;
	int i;
	Complex();
	Complex(int r_, int i_);
    Complex(const Complex& other);
    ~Complex();
    
    double Distanceof(const Complex& other) const;
	void Print() const;
    
	static int getCounter();
    
private:
    static int counter;
};
```

其中，调用`Complex()`时需将复数的实部和虚部初始化为$0$，并输出：

```
Create an empty complex.
```

调用`Complex(int, int)`时，将实部和虚部分别初始化为$r, i$，并输出以下内容：

```
Create an complex whose real is r, image is i.
```

调用`Complex(const Complex)`时，用传入的复数初始化当前复数，输出：

```
Copy from an complex whose real is r, image is i.
```

在调用析构函数时，输出：

```
Destroy an complex whose real is r, image is i.
```

函数`Distanceof`返回两个复数对应的复平面上的点的距离。

`Print()`函数输出当前复数，格式为：
$$
a + b\mathrm{i}
$$
(注意某些特殊情况下的输出)。



除了上面这些内容，懒惰的计数君想要统计当前已经定义了多少复数，函数`getCounter()`返回当前复数的个数。



## Hint

请查阅函数重载，类的成员属性，类中的静态成员等内容。
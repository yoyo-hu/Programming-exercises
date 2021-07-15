# [friend function ] Fruit from_lecture 3

## description
```
使用友元函数实现标准输入和输出函数重载
类的声明如下：
class Fruit
{
public:
	Fruit();

	friend ostream& operator << (ostream& out, const Fruit& x);
	friend istream& operator >> (istream& in,  Fruit& x);

private:
	string name, color;
};
```
```
输出格式为：
apple red
Finished!
```
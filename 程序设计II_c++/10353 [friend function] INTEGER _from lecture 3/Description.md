# [friend function] INTEGER _from lecture 3

## description
```
使用友元函数实现操作符的重载。函数声明：
class INTEGER 
{
public:
				 INTEGER(int i = 0);       // 构造函数

				 INTEGER(const INTEGER& other);    // 拷贝构造函数

				 // 友元重载加法运算符
				 friend INTEGER operator +(INTEGER left, INTEGER right); 

				void print();
private: 	
     int value;	// 私有数据
	
};
```
```
输出格式为：
42
```
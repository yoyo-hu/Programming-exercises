# [Operator Overloading]简单的Matrix运算

## Task
完善Matrix类的定义，实现简单的Matrix运算，类的定义,main函数已给出，你需要编写Matrix.h文件实现具体函数，记得包含类的定义。

## Detail
```
class Matrix
	//定义Matrix类  
{
public:
	Matrix();                                           //默认构造函数
	~Matrix();                                          //析构函数
	Matrix(const Matrix &);                             //拷贝构造函数
	Matrix(int row, int col);                           //含参数构造函数  
	Matrix operator+(const Matrix &)const;              //重载运算符“+”
	Matrix& operator=(const Matrix &);                  //重载运算符“=”
	Matrix transpose()const;                            //矩阵的转置
	void display()const;                                //输出数据函数   
private:
	int row;                                            //矩阵的行
	int col;                                            //矩阵的列
	int** mat;                                          //用于储存矩阵
};
```

## Hint
类的构造函数与析构函数，运算符重载，new与delete

## Sample Input 1
```
2 3
1 2 3
1 2 3
1 2 3
1 2 3
```

## Sample Output 1
```

Matrix a:
1 2 3
1 2 3

Matrix b:
1 2 3
1 2 3

Matrix c = Matrix a + Matrix b :
2 4 6
2 4 6

Matrix a transpose to Matrix d:
1 1
2 2
3 3

```
## Sample Input 2
```
2 2
1 2
3 4
4 3
2 1
```
## Sample Ouput 2
```

Matrix a:
1 2
3 4

Matrix b:
4 3
2 1

Matrix c = Matrix a + Matrix b :
5 5
5 5

Matrix a transpose to Matrix d:
1 3
2 4
```

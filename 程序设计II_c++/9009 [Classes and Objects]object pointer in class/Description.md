# [Classes and Objects]object pointer in class

##### 根据下面的输入输出结果，在提供的main函数中'//'注释的地方补充合适的代码（共5处），并提交到MAIN.cpp文件。

输入 ：无输入

输出：
```
June 4, 1989
June 4, 1989
March 3, 2013
December 21, 1976
```
待补全的MAIN.cpp代码：
```
#include "DATE6.h"
#include <iostream>
using namespace std;

int main()
{
	//1. 在下面一行，实现定义对象指针变量date1；
	
	DATE  date2( 1989, 6, 4 ); 
	//2. 在下面一行，实现将date1指向对象date2；
	
	date2.Print();
	//3. 在下面一行，实现date1指向对象的Print；

	date2.Set(2013,3,3);
	date2.Print();

	DATE* date_ptr; 
	//4. 在下面一行，实现动态创建一个DATE对象，初始化为1976年12月20日。方法：对象指针 = new 类名( 1976, 12, 20 );
	
	if( date_ptr == NULL ) {
		cout << "error";
		return 1;
	}
	else {
		date_ptr -> Increment();
		date_ptr -> Print();
	}

	//5. 在下面一行，实现撤销对象；
	
	return 0;
}
```

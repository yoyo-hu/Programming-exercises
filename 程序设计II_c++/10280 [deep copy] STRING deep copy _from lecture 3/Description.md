# [deep copy] STRING deep copy _from lecture 3

## description
```
实现一个string类的deep copy,注意，如果程序对同一个内存块释放两次，就会出错。函数的声明如下：
String.h:
class STRING {
private:	
      int     length;
      char  *buffer;
public:	
      STRING();
      STRING(const char *str);
      ~STRING();
	  STRING& operator=(const STRING &another);
};


```
```
输出为：
success
```
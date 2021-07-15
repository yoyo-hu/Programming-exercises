# Week1 [Basic C++] function overloading -1

## Description
```
写出3组Plus函数的声明与实现，类型分别为int，double，string
主函数如下，注意只需要实现Plus函数和包含相关的头文件。
 
int main() {
int n;
  int a,b;
double c,d;
std::string str1,str2;
std::cin>>n;
while(n--)
{
std::cin>>a >> b ;
std::cin>>c >> d;
std::cin >> str1 >>str2;
std::cout <<myplus(a, b) << endl;
std::cout <<myplus(d, c) << endl;
std::cout <<myplus(str1, str2) << endl;
} 
return 0;
}
```

## Sample Input
```
1
2 3
2.5 3.5
women day
```

## Sample Output

```
5
6
womenday
```

## Hint  
**PS：please add std:: before using the string type**


# Week1 [Basic C++] call-by-reference

## Description

有如下一段程序:
```
void printtotal(int total) {
    printf("Total in Main: %d\n", total);
 
}
 int main() {
    int x, y, total;
    x = 10;
    y = 5;
    total = 0;
 
    printtotal(total);
    addxy(x, y, total);
 
    printtotal(total);
  
    subxy(x, y, total);
    printtotal(total);
    return 0;
}
```
请补充函数 addxy 和 subxy的声明和实现.  
addxy形参中total使用按值传递,函数中输出  
`Total from inside addxy: (具体数字)`  
subxy形参中total使用按引用传递,将会修改主函数作用域中的total值,函数中输出  
`Total from inside subxy: (具体数字)`  
## Input
```
None
```
## Output
```
Total in Main: 0
Total from inside addxy: 15
Total in Main: 0
Total from inside subxy: 5
Total in Main: 5
```
 
 

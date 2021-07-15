# [Classes and Objects]Calculate the Sum

## Description
```
完成类MyClass的定义，
class MyClass
{
    int data;
public:
    MyClass(int d); //将d的值赋给data, d值大于0
    void printData(); 
    int sumIt(); //求和1+2+3+...+data，函数返回该和值
};
```
使得函数f()输出为
10
55
100
5050

void f()
{
    MyClass mc(10);
    mc.printData();    
    cout << mc.sumIt() << endl;

    MyClass mc1(100);
    mc1.printData();
    cout << mc1.sumIt() << endl;
    return 0;
}

注意：你只需要提交类MyClass的定义。
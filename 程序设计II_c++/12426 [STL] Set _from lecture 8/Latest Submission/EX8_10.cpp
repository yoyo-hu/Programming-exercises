// setDemo.cpp 功能： 演示set容器类的使用  8.11.cpp
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int iarr[] = {1, 1, 2, 3, 3};
    double darr[] = {4.4, 5.6, 2.1, 7.8, 8.8, 9.8, 1.1};

    // 用内置数组iarr的所有元素对set对象iset进行初始化: iset中将仅包
    // 含3个元素：1， 2， 3
    set<int> iset;
    iset.insert(iarr+1,iarr+4);
    set<double> dset;           // 创建空的set对象

    // 输出set对象iset中的元素
    cout << "content of the integer set container:" << endl;
    for (set<int>::iterator iter = iset.begin(); iter != iset.end(); iter++)
        cout << *iter << " ";
    cout << endl;

    // 在iset对象中查找特定元素
    if (iset.find(2) != iset.end())
        cout << "2 is a element in the integer set container" << endl;
    else
        cout << "2 is not a element in the integer set container" << endl;
    if (iset.find(6) != iset.end())
        cout << "6 is a element in the integer set container" << endl;
    else
        cout << "6 is not a element in the integer set container" << endl;

    // 向set对象dset中插入元素 1.2, 3.4, 3.4
    dset.insert(1.2);
    dset.insert(3.4);
    dset.insert(3.4);
    // 向set对象dset中插入 darr中的所有元素
    dset.insert(darr,darr+7);

    cout << endl;

    // 输出set对象dset中的元素
    cout << "content of the double set container:" << endl;
    for (set<double>::iterator iter = dset.begin(); iter != dset.end(); iter++)
        cout << *iter << " ";
    cout << endl;

    // 删除dset对象中的元素1.1
    dset.erase(1.1);

    // 删除dset对象中大于等于3.4且小于7.8的所有元素

    for (set<double>::iterator iter = dset.begin(); iter != dset.end(); ){
      set<double>::iterator tmp=iter;
      ++iter;
      if(*tmp>=3.4&&*tmp<7.8){
        dset.erase(tmp);
      }
    }

    // 输出set对象dset中的元素
    cout << "content of the double set container(after delete):" << endl;
    for (set<double>::iterator iter = dset.begin(); iter != dset.end(); iter++)
        cout << *iter << " ";

    return 0;
}
# [Polymorphism] Estate

# Estate

# Description
<p>&nbsp;Feng Gor是著名的房地产商，她每天的主要工作就是&mdash;&mdash;数钱。这并不是一件容易的事，Feng Gor主要投资两类地，一类是圆的，一类是方的。现在你作为她的会计，需要帮她数钱。Circle类和Square类继承于Land类，分别代表圆的地和方的地，根据单位面积价格(price)和地的面积(根据边长或半径算出)。Accountant类用于计算Feng Gor开发各种房地产带来的收入。DevelopEstate函数接收一个Land的指针，计算开发这块房地产带来的收入（这里用到了动态绑定哦）。CheckMoney函数返回当前的收入。</p>
<p><img src='%IMGPATH%QQ20130410-2.png'/></p>
<p><img src='%IMGPATH%QQ20130410-3(1).png'/></p>

# Input
<p>&nbsp;</p>
<p>&nbsp;</p>

# Output


# Sample_Input
```
//这里给出一个测试的main函数
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char *argv[]) {
  Accountant py;
  Circle *a = new Circle(100, 10000);
  Square *b = new Square(100, 50000);
  py.DevelopEstate(a);
  cout << setprecision(10) << py.CheckMoney() << endl;
  py.DevelopEstate(b);
  cout << setprecision(10) << py.CheckMoney() << endl;

  return 0;
}
```

# Sample_Ouput
```
314159265.4
814159265.4
```

# Hint
<p>为了防止大家背不熟圆周率导致Wrong Answer，特意提醒一下，pi可以用acos(-1)表示。acos在cmath库里。</p>


# [Polymorphism] Polymorphism

# Polymorphism

# Description
<div>Feng Gor除了是个房地产商外，像大多数女生一样，她也是喜欢逛淘宝的。我们都知道，在淘宝上有很多很多的商品，当然，Feng Gor挑的一般都是最贵的，但是偶尔也是要看看销量参考一下的啊。因此，她希望淘宝能够按照她想要的方式来排序：当她想要按价格排序，商品就按价格排序；当她想要按销量排序，商品就按销量排序(都是按照从大到小排序)。淘宝这种大公司肯定已经提供这个功能的啊。不过，作为一个程序猿，她希望大家也来用C++模拟实现以下。</div>
<div>&nbsp;</div>
<div>代表商品的结构体如下：</div>
<div>struct TaoBaoItem {</div>
<div>&nbsp; int price;</div>
<div>&nbsp; int volume_of_sales;</div>
<div>};</div>
<div>&nbsp;</div>
<div>为了能实现不同的排序方式，她特意抽象出了一个接口出来，</div>
<div>class SortInterface {</div>
<div>&nbsp;public:</div>
<div>&nbsp; virtual ~SortInterface() {};</div>
<div>&nbsp;</div>
<div>&nbsp; virtual void DoSort(TaoBaoItem item[], int size) = 0;</div>
<div>};</div>
<div>&nbsp;</div>
<div>接下来，她要你们实现的类如下：</div>
<div>class SortByPrice : public SortInterface {</div>
<div>&nbsp;public:</div>
<div>&nbsp; virtual void DoSort(TaoBaoItem item[], int size);</div>
<div>};</div>
<div>&nbsp;</div>
<div>class SortBySales : public SortInterface {</div>
<div>&nbsp;public:</div>
<div>&nbsp; virtual void DoSort(TaoBaoItem item[], int size);</div>
<div>};</div>
<div>&nbsp;</div>
<div>class TaoBao {</div>
<div>&nbsp;public:</div>
<div>&nbsp; TaoBao(SortInterface* strategy);</div>
<div>&nbsp;&nbsp;</div>
<div>&nbsp; void SetSortStrategy(SortInterface* strategy);</div>
<div>&nbsp;</div>
<div>&nbsp; // Use current strategy_ to do the sort.</div>
<div>&nbsp; void sort(TaoBaoItem item[], int size);</div>
<div>&nbsp;</div>
<div>&nbsp;private:</div>
<div>&nbsp; SortInterface *strategy_;</div>
<div>};</div>
<div>&nbsp;</div>
<div>注意看测试框架的代码！</div>

# Input


# Output


# Sample_Input
```
#include <iostream>
#include <string>
using namespace std;

struct TaoBaoItem {
  int price;
  int volume_of_sales;
};

class SortInterface {
 public:
  virtual ~SortInterface() {};

  virtual void DoSort(TaoBaoItem item[], int size) = 0;
};

#include "source.cpp"

void printItem(TaoBaoItem arr[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << arr[i].price << " " << arr[i].volume_of_sales << endl;
  }
}

int main(int argc, char *argv[]) {
  TaoBaoItem item[4] = {
    {1, 2},
    {2, 3},
    {5, 1},
    {3, 10}
  };
  SortByPrice price;
  SortBySales sales;

  TaoBao taobao(&price); 
  taobao.sort(item, 4);
  printItem(item, 4);
  
  taobao.SetSortStrategy(&sales);
  taobao.sort(item, 4);
  printItem(item, 4);

  return 0;
}

```

# Sample_Ouput
```
5 1
3 10
2 3
1 2
3 10
2 3
1 2
5 1
```

# Hint
<p>这其实是设计模式中的一种！（其实这个好像只是个简单的演示代码）叫做策略模式，有兴趣的同学可以在自行Google找到维基百科看，不过，这个题目最主要的目的是想让大家体验一下多态带来的好处。另外，关于排序的实现，大家可以尝试使用stl库中提供的sort函数，自行Google用法啊！</p>
<p>&nbsp;</p>


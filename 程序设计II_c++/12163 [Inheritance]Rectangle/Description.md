# [Inheritance]Rectangle

# Rectangle

# Description
<p>1、定义基类 Point，使其能够初始化坐标（x，y），移动坐标，返回坐标</p>
<p>2、定义派生类 Rectangle，有成员变量 width、high；并且有成员函数，使其能够返回矩形相关属性：宽、高、面积</p>
<p>基类：</p>
<div>class Point</div>
<div>{ &nbsp;</div>
<div>&nbsp; &nbsp; int x,y;</div>
<div>public:</div>
<div>&nbsp; &nbsp; Point(int x,int y);</div>
<div>&nbsp; &nbsp; void Move(int x,int y);</div>
<div>&nbsp; &nbsp; int Getx() const;</div>
<div>&nbsp; &nbsp; int Gety() const;</div>
<div>};</div>
<p>主函数：</p>
```
cin>>x>>y;
cin>>length>>width;
Rectangle R(x,y,length,width);
cin>>xmove>>ymove;
R.Move(xmove,ymove);
cout <<R.Getx()<<" "<<R.Gety()<<" "<<R.Getlength() <<" "<<R.Getwidth()<<" "<<R.Getarea()<<endl;
```

# Input
<p>第一行输入n，代表n组测试例子</p>
<p>第二行输入x，y ，表示坐标原点A（x,y）</p>
<p>第三行输入length，width，表示矩形长、宽</p>
<p>第四行输入xmove，ymove，表示原点A在横纵坐标移动的距离。</p>

# Output
<p>每组数据，输出一行，分别是：移动后的横坐标、纵坐标；矩形长、宽；面积。</p>

# Sample_Input
```
1
0 0
8 4
10 12


```

# Sample_Ouput
```
10 12 8 4 32


```

# Hint
<p>you ﻿only&nbsp;need &nbsp;to submit the class Point and Rectangle.</p>
<p>方法名首字母大写,其余字母小写</p>


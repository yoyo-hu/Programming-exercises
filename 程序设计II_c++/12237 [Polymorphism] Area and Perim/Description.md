# [Polymorphism] Area and Perim

# Area and Perim

# Description
<p style="text-align: left;">声明一个Shape抽象类，在此基础上派生出Rectangle类和Circle类，两者都有GetArea（）和GetPerim（）函数，用来计算面积和</p>
<p style="text-align: left;">周长，麻烦封装以上各类，编写程序。需要提交类shape、Rectangle、Cricle类</p>
<p style="text-align: left;">主函数：</p>
<p style="text-align: left;">int main ()</p>
<p>{</p>
<p><span class="Apple-tab-span" style="white-space:pre">	</span>double n,a,b,c;</p>
<p><span class="Apple-tab-span" style="white-space:pre">	</span>cin&gt;&gt;n;</p>
<p><span class="Apple-tab-span" style="white-space:pre">	</span>for(int i=0;i&lt;n;i++)</p>
<p><span class="Apple-tab-span" style="white-space:pre">	</span>{</p>
<p><span class="Apple-tab-span" style="white-space:pre">		</span>Shape *s;</p>
<p><span class="Apple-tab-span" style="white-space:pre">		</span>cin&gt;&gt;a&gt;&gt;b&gt;&gt;c;</p>
<p><span class="Apple-tab-span" style="white-space:pre">		</span>s = new Rectangle(a,b);</p>
<p><span class="Apple-tab-span" style="white-space:pre">		</span>cout&lt;&lt;s-&gt;GetArea()&lt;&lt;&quot; &quot;&lt;&lt;s-&gt;GetPerim()&lt;&lt;endl;</p>
<p><span class="Apple-tab-span" style="white-space:pre">		</span>delete s;</p>
<p><span class="Apple-tab-span" style="white-space:pre">		</span>s = new Circle(c);</p>
<p><span class="Apple-tab-span" style="white-space:pre">		</span>cout&lt;&lt;s-&gt;GetArea()&lt;&lt;&quot; &quot;&lt;&lt;s-&gt;GetPerim()&lt;&lt;endl;</p>
<p>&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; delete s;</p>
<p><span class="Apple-tab-span" style="white-space:pre">	</span>}</p>
<p><span class="Apple-tab-span" style="white-space:pre">	</span>return 0;</p>
<p>}</p>
<p style="text-align: left;">&nbsp;</p>

# Input
<p>第一行输入n，表示n个测试例子；接下来有n行，每一行输入数，a、b、c，表示矩形的宽、长，以及圆形的半径</p>

# Output
<p>&nbsp;对应每一行输入：</p>
<p>第一行输出矩形的面积、周长</p>
<p>第二行输出圆形的面积、周长</p>

# Sample_Input
```
1
2 2 3


```

# Sample_Ouput
```
4 8
28.26 18.84


```

# Hint
<p>&nbsp;const double PI = 3.14； (Already defined)</p>


# [Exception] 简单减法

# 简单减法

# Description
<p>某小朋友已经四岁了，她开始学习数字减法，但她还不理解负数的概念，如果被减数和减数中出现负数，或者被减数小于减数，她都不会算。<br />
函数calc做减法计算前进行了检查。<br />
int calc(int a, int b) throw(logic_error)<br />
{<br />
&nbsp; if (a&lt;0) throw out_of_range(&quot;Out of range exeception&quot;);<br />
&nbsp; else if (b&lt;0) throw out_of_range(&quot;Out of range exeception&quot;);<br />
&nbsp; else if (a&lt;b) throw logic_error(&quot;Minuend smaller than subtrahend&quot;);<br />
&nbsp; return a-b;<br />
}<br />
请写一个test函数<br />
void test(int, int)<br />
使得以下函数f<br />
void f()<br />
{</p>
<p>&nbsp; test(3, 1);<br />
&nbsp; test(-3,1);<br />
&nbsp; test(1,-3);<br />
&nbsp; test(1,3);<br />
}<br />
输出如下：</p>
<p>2<br />
Out of range exeception<br />
Out of range exeception<br />
Minuend smaller than subtrahend</p>
`请提交test函数以及calc函数`

# Input


# Output


# Sample_Input
```

```

# Sample_Ouput
```

```

# Hint



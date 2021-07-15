# [Template] Template Specification

# Template Specification

# Description
<p>给定一个函数声明如下 bool cmp( T a, T b )。</p>
<p>该函数比较变量 a 和 b 大小，如果a等于b，返回true；否则返回false。</p>
<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; （1） 如果a, b的类型是 int, float, double, char*&nbsp;或 string&nbsp;函数cmp 比较的是 a, b 值的大小；</p>
<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; （注意char*字符串的比较请使用函数strcmp（头文件string.h））</p>
<p>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp; （2）如果a, b的类型是指针，则比较的是其所指向的对象是否相等。</p>

# Input
<p>&nbsp;int aInt = 1, bInt = 2 ;<br />
&nbsp;double aDouble = 3.0, bDouble = 3.0 ;<br />
&nbsp;char aChars[5] = &quot;haha&quot;, bChars[5] ;<br />
&nbsp;string aStr = &quot;haha&quot;, bStr = &quot;aha&quot; ;<br />
&nbsp;int* aIntPtr = &amp;aInt, *bIntPtr = &amp;bInt ;</p>
<p>&nbsp;cout &lt;&lt; boolalpha &lt;&lt; cmp( aInt, bInt ) &lt;&lt; endl ;<br />
&nbsp;cout &lt;&lt; cmp( aDouble, bDouble ) &lt;&lt; endl ;</p>
<p>&nbsp;strcpy( bChars, aChars ) ;<br />
&nbsp;cout &lt;&lt; cmp( aChars, bChars ) &lt;&lt; endl ;<br />
&nbsp;cout &lt;&lt; cmp( aStr, bStr ) &lt;&lt; endl ;<br />
&nbsp;cout &lt;&lt; cmp( aIntPtr, bIntPtr ) &lt;&lt; endl ;</p>

# Output
<p>false<br />
true<br />
true<br />
false<br />
false</p>

# Sample_Input
```

```

# Sample_Ouput
```

```

# Hint



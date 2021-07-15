# [STL] Class  Set

# Class  Set

# Description
<p>设计一个集合(Set)类模板，Set可以包含<strong>零个</strong>或<strong>多个无序的非重复</strong>元素。</p>
<p>公共接口包含以下成员函数：</p>
<p>1. 创建一个Set；</p>
<p>2. 增加一个新元素到Set；</p>
<p>3.从Set中删除一个元素</p>
<p>4.列举Set中的所有元素</p>
<p>5. s1和s2都是Set的对象，计算它们的并集（s1 + s2）= { x | x 属于 s1 或 x 属于 s2 }</p>
<p>6. s1和s2都是Set的对象，计算它们的差集（s1 - s2 ) = { x | x 属于&nbsp;s1 且 x 不属于 s2 }</p>
<p>&nbsp;</p>
<p>该类模板的声明如下：</p>
<p><strong>template</strong>&lt; <strong>typename </strong>T &gt;<br />
<strong>class </strong>Set<br />
{<br />
<strong>public</strong>:<br />
&nbsp;Set() ;<br />
&nbsp;Set( <strong>int </strong>maxSize ) ;<br />
&nbsp;~Set() ;<br />
&nbsp;Set( <strong>const </strong>Set&amp; ) ;<br />
&nbsp;Set <strong>operator</strong>+( <strong>const </strong>Set&amp; s ) ;<br />
&nbsp;Set <strong>operator</strong>-( <strong>const </strong>Set&amp; s ) ;<br />
&nbsp;<strong>void operator</strong>=( <strong>const </strong>Set&amp; s ) ;<br />
&nbsp;<strong>bool </strong>insert( T newItem ) ;<br />
&nbsp;<strong>bool </strong>erase( T targetItem ) ;<br />
&nbsp;<strong>void </strong>print() <strong>const </strong>;<br />
&nbsp;T* getData() <strong>const </strong>;<br />
&nbsp;<strong>int </strong>getCount() <strong>const </strong>;<br />
&nbsp;<strong>int </strong>getMaxSize() <strong>const </strong>;<br />
<strong>private</strong>:<br />
&nbsp;<strong>int </strong>count ;<br />
&nbsp;<strong>int </strong>maxSize ;<br />
&nbsp;T* data ;<br />
} ;</p>

# Input
<p>&nbsp;Set&lt;<strong>int</strong>&gt; s1( 10 ), s2( 10 ), s_plus, s_minus ;<br />
&nbsp;<br />
&nbsp;s1.insert( 1 ) ;<br />
&nbsp;s1.insert( 2 ) ;<br />
&nbsp;s1.insert( 2 ) ;<br />
&nbsp;s1.insert( 4 ) ;<br />
&nbsp;cout &lt;&lt; &quot;Items in s1 are : &quot; ;<br />
&nbsp;s1.print() ;<br />
&nbsp;<br />
&nbsp;s2.insert( 3 ) ;<br />
&nbsp;s2.insert( 3 ) ;<br />
&nbsp;s2.insert( 1 ) ;<br />
&nbsp;s2.insert( 2 ) ;<br />
&nbsp;cout &lt;&lt; &quot;Items in s2 are: &quot; ;<br />
&nbsp;s2.print() ;<br />
&nbsp;<br />
&nbsp;s_plus = s1 + s2 ;<br />
&nbsp;cout &lt;&lt; &quot;Items in s_plus are: &quot; ;<br />
&nbsp;s_plus.print() ;<br />
&nbsp;<br />
&nbsp;s_minus = s1 - s2 ;<br />
&nbsp;cout &lt;&lt; &quot;Items in s_minus are: &quot; ;<br />
&nbsp;s_minus.print() ;</p>

# Output
<p>Items in s1 are : 1 2 4 <br />
Items in s2 are: 3 1 2 <br />
Items in s_plus are: 1 2 4 3 <br />
Items in s_minus are: 4</p>
<p>&nbsp;</p>

# Sample_Input
```

```

# Sample_Ouput
```

```

# Hint
<p>提交的代码中，请不要包含main()函数</p>


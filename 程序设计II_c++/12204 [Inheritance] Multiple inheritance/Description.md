# [Inheritance] Multiple inheritance

# multiple inheritance

# Description
<p>写作和赛车是韩少的两大最爱，但在生活的不同时期还是要有所取舍。</p>
<p>韩少的原则是：</p>
<p>周末：写作优先； 周内：赛车优先；</p>
<p>这些可以提现在Weekend和Workday的对象构造中，类继承关系如下：</p>
<p>Racing&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; Writing</p>
<p>&nbsp;&nbsp;&nbsp; \&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /</p>
<p>&nbsp; Weekend/Workday</p>
<p>&nbsp;</p>
<p>其中Racing和Writing如下：</p>
<p>&nbsp;</p>
<p>class Writing<br />
{<br />
public:<br />
&nbsp;Writing(){cout&lt;&lt;&quot;Writing constructor&quot;&lt;&lt;endl;}<br />
&nbsp;~Writing(){cout&lt;&lt;&quot;~Writing&quot;&lt;&lt;endl;}<br />
};</p>
<p>class Racing<br />
{<br />
public:<br />
&nbsp;Racing(){cout&lt;&lt;&quot;Racing constructor&quot;&lt;&lt;endl;}<br />
&nbsp;~Racing(){cout&lt;&lt;&quot;~Racing&quot;&lt;&lt;endl;}<br />
};</p>
<p>主函数如下：</p>
<p>int main()<br />
{<br />
&nbsp;{<br />
&nbsp;Weekend end;<br />
&nbsp;Workday day;<br />
}<br />
}<br />
&nbsp;</p>
<p>如何使得输出为：</p>
<p>Writing constructor<br />
Racing constructor<br />
Weekend constructor<br />
Racing constructor<br />
Writing constructor<br />
Workday constructor<br />
~Workday<br />
~Writing<br />
~Racing<br />
~Weekend<br />
~Racing<br />
~Writing<br />
&nbsp;</p>
<p>&nbsp;</p>

# Input
<p>none</p>

# Output
<p>Writing constructor<br />
Racing constructor<br />
Weekend constructor<br />
Racing constructor<br />
Writing constructor<br />
Workday constructor<br />
~Workday<br />
~Writing<br />
~Racing<br />
~Weekend<br />
~Racing<br />
~Writing<br />
&nbsp;</p>

# Sample_Input
```

```

# Sample_Ouput
```
Writing constructor
Racing constructor
Weekend constructor
Racing constructor
Writing constructor
Workday constructor
~Workday
~Writing
~Racing
~Weekend
~Racing
~Writing

```

# Hint
<p>提交main函数之外的所有类</p>


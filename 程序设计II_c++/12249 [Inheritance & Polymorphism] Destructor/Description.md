# [Inheritance & Polymorphism] Destructor

# Destructor

# Description
<p>&nbsp;<span style="color: rgb(51, 51, 51); font-family: Arial; font-size: 16px; line-height: 20px;">下面是不完整的继承类定义:</span></p>
<div><span style="color: rgb(51, 51, 51); font-family: Arial; font-size: 16px; line-height: 20px;">class A</span></div>
<div><span style="color: rgb(51, 51, 51); font-family: Arial; font-size: 16px; line-height: 20px;">{</span></div>
<div>public:</div>
<div>
<div><span class="Apple-tab-span" style="white-space:pre">	</span>virtual void Prin()</div>
<div><span class="Apple-tab-span" style="white-space:pre">	</span>{</div>
<div><span class="Apple-tab-span" style="white-space:pre">		</span>cout&lt;&lt;&quot;Prin come form class A&quot;&lt;&lt;endl;</div>
<div><span class="Apple-tab-span" style="white-space:pre">	</span>}</div>
</div>
<div><span style="color: rgb(51, 51, 51); font-family: Arial; font-size: 16px; line-height: 20px;">};</span></div>
<div><span style="color: rgb(51, 51, 51); font-family: Arial; font-size: 16px; line-height: 20px;">class B</span></div>
<div><span style="color: rgb(51, 51, 51); font-family: Arial; font-size: 16px; line-height: 20px;">{</span></div>
<div><span style="color: rgb(51, 51, 51); font-family: Arial; font-size: 16px; line-height: 20px;">&nbsp; &nbsp;char *buf;</span></div>
<div>public:</div>
<div>&nbsp; &nbsp;&nbsp;<span class="Apple-tab-span" style="white-space: pre;">	</span>void Prin()</div>
<div><span class="Apple-tab-span" style="white-space:pre">	</span>{</div>
<div><span class="Apple-tab-span" style="white-space:pre">		</span>cout&lt;&lt;&quot;Prin come from class B&quot;&lt;&lt;endl;</div>
<div><span class="Apple-tab-span" style="white-space:pre">	</span>}</div>
<div><span style="color: rgb(51, 51, 51); font-family: Arial; font-size: 16px; line-height: 20px;">};</span></div>
<div>
<div style="color: rgb(51, 51, 51); font-family: Arial; line-height: 20px;">&nbsp;</div>
</div>
<div><span style="color: rgb(51, 51, 51); font-family: Arial; font-size: 16px; line-height: 20px;">试完成其定义(你可以根据需要增加必要的构造函数、析构函数 ),使得主函数main运行后能得到其后结果：</span></div>
<div>
<div style="color: rgb(51, 51, 51); font-family: Arial; line-height: 20px;">void fun(A *a)</div>
<div style="color: rgb(51, 51, 51); font-family: Arial; line-height: 20px;">{</div>
<div style="color: rgb(51, 51, 51); font-family: Arial; line-height: 20px;"><span class="Apple-tab-span" style="white-space: pre;">	</span>delete a;</div>
<div style="color: rgb(51, 51, 51); font-family: Arial; line-height: 20px;">}</div>
</div>
<div><font face="Arial" color="#333333">
<div style="line-height: 20px;">
<div>int main()</div>
<div>{</div>
<div><span class="Apple-tab-span" style="white-space:pre">	</span>A *a = new B(10);</div>
<div><span class="Apple-tab-span" style="white-space:pre">	</span>a-&gt;Prin();</div>
<div><span class="Apple-tab-span" style="white-space:pre">	</span>fun(a);</div>
<div><span class="Apple-tab-span" style="white-space:pre">	</span>B *b = &nbsp;new B(20);</div>
<div><span class="Apple-tab-span" style="white-space:pre">	</span>fun(b);</div>
<div><span class="Apple-tab-span" style="white-space:pre">	</span>return 0;</div>
<div>}</div>
</div>
<div style="line-height: 20px;">运行结果：</div>
<div>&nbsp;</div>
</font>Prin come from class B</div>
<div>B::~B()called</div>
<div>A::~A()called</div>
<div>B::~B()called</div>
<div>A::~A()called</div>
<div><font face="Arial" color="#333333">
<div>&nbsp;</div>
<div>&nbsp;</div>
<div><span style="line-height: 20px;"><br />
</span></div>
</font></div>

# Input
<p>&nbsp;none</p>

# Output
<p>&nbsp;none</p>

# Sample_Input
```

```

# Sample_Ouput
```

```

# Hint
<p>virtual destructor!</p>
<p>only need to submit class A, B and main()</p>


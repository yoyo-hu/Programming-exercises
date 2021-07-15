# [Inheritance]猫科动物和老虎

# 猫科动物和老虎

# Description
<p>下面是不完整的继承类定义，<br />
<br />
class Cat<br />
{<br />
&nbsp;&nbsp;&nbsp; int data;<br />
public:<br />
&nbsp;&nbsp;&nbsp; Cat();<br />
};<br />
<br />
class Tiger : public Cat<br />
{<br />
&nbsp;&nbsp;&nbsp; int data;<br />
public:<br />
&nbsp;&nbsp;&nbsp; Tiger(int);<br />
};<br />
<br />
试完成其定义(你可以根据需要增加必要的构造函数和析构函数)，使得主函数main运行后能得到其后结果：<br />
<br />
int main()<br />
{<br />
&nbsp;&nbsp;&nbsp; Cat bc;<br />
&nbsp;&nbsp;&nbsp; Tiger dc(6);<br />
&nbsp;&nbsp;&nbsp; Tiger dc1(18);<br />
<br />
&nbsp;&nbsp;&nbsp; return 0;<br />
}</p>
<p><br />
运行结果：<br />
Default Constructor of Cat is Running<br />
Constructor of Cat is Running 6<br />
Constructor of Tiger is Running 6<br />
Constructor of Cat is Running 18<br />
Constructor of Tiger is Running 18<br />
Destructor of Tiger is Running 18<br />
Destructor of Cat is Running 18<br />
Destructor of Tiger is Running 6<br />
Destructor of Cat is Running 6<br />
Destructor of Cat is Running 0<br />
<br />
注意：你只需要提交类定义。</p>

# Input


# Output


# Sample_Input
```

```

# Sample_Ouput
```

```

# Hint



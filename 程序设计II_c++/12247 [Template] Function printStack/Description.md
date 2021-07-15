# [Template] Function printStack

# Function printStack

# Description
<p>Rewrite the Stack class to add the printStack function as an instance function to display all the elements in the stack, as follows:<br />
template&lt;typename T&gt;<br />
class Stack<br />
{<br />
public:<br />
&nbsp; Stack();<br />
&nbsp; bool empty();<br />
&nbsp; T peek();<br />
&nbsp; void push(T value);<br />
&nbsp; T pop();<br />
&nbsp; int getSize();<br />
&nbsp; void printStack();<br />
};<br />
<br />
The printStack() function output the elements in the stack from top to bottom, each element in one line. Just output the elements, don't erase the elements in the stack.<br />
&nbsp; The following codes:<br />
Stack&lt;int&gt; s;<br />
for(int i=0;i&lt;3;++i) s.push(i);<br />
s.printStack();<br />
s.push(3);<br />
s.printStack();<br />
<br />
&nbsp; Output:<br />
2<br />
1<br />
0<br />
3<br />
2<br />
1<br />
0<br />
&nbsp;</p>

# Input


# Output


# Sample_Input
```

```

# Sample_Ouput
```

```

# Hint



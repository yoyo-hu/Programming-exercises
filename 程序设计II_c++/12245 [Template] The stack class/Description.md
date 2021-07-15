# [Template] The stack class

# The stack class

# Description
<div>&nbsp;</div>
<div style="text-indent: 21pt"><font size="3">You are to implement the following Stack class template, using the nontype parameter <span style="color: #0000ff">capacity</span> to allocate the capacity of the stack, i.e. maximum&nbsp;elements that can be stored in the stack.</font></div>
<div>&nbsp;</div>
<div><span style="color: #0000ff"><font size="3">template&lt;typename T, int capacity&gt;<br />
class Stack<br />
{<br />
public:<br />
&nbsp;&nbsp;&nbsp; Stack();&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // Constructs an empty stack.<br />
&nbsp;&nbsp;&nbsp; bool empty();&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; &nbsp;// Returns true if the stack is empty.<br />
&nbsp;&nbsp;&nbsp; T peek();&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // Returns the element at the top of the stack without removing it from the stack.<br />
&nbsp;&nbsp;&nbsp; void push(T value); // Stores an element into the top of the stack.<br />
&nbsp;&nbsp;&nbsp; T pop();&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // Removes the element at the top of the stack and returns it.<br />
&nbsp;&nbsp;&nbsp; int size();&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // Returns the number of elements in the stack.<br />
private:<br />
&nbsp;&nbsp;&nbsp; T* elements;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // Points to an array that stores elements in the stack.<br />
&nbsp;&nbsp;&nbsp; int num;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; // The number of the elements in the stack.<br />
};</font></span></div>
<div>&nbsp;</div>
<div style="text-indent: 21pt"><font size="3">Your submitted source code should&nbsp;only include the implementation of Stack class template,&nbsp;without the declaration above.</font></div>
<div style="text-indent: 21pt"><font size="3">No main() function should be included.</font></div>
<p>&nbsp;</p>

# Input


# Output


# Sample_Input
```

```

# Sample_Ouput
```

```

# Hint



# [Operator Overloading]The Int class

# The Int class

# Description
<p>Implement a class Int that behaves exactly like an int.<br />
class Int<br />
{<br />
&nbsp; int i;<br />
public:<br />
&nbsp; int getI() { return i; }<br />
&nbsp; //add any member function needed here<br />
};<br />
For example, the following code will has the same output when Int replace by int:<br />
void f()<br />
{<br />
&nbsp; Int a=0;<br />
&nbsp; Int b(1);<br />
&nbsp; Int c(2.5);<br />
&nbsp; Int d = 99.5;<br />
<br />
&nbsp; cout &lt;&lt;&nbsp; a &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; b &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; d &lt;&lt; endl;<br />
&nbsp; <br />
&nbsp; d += 1;<br />
&nbsp; d += 1.5;<br />
&nbsp; cout &lt;&lt;&nbsp; c+d &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; 1+c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; c+1 &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; 1.5+c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; c+1.5 &lt;&lt; endl;<br />
<br />
&nbsp; cout &lt;&lt;&nbsp; a + b + c + d &lt;&lt; endl;<br />
<br />
&nbsp; d -= 1;<br />
&nbsp; d -= 1.5;<br />
&nbsp; cout &lt;&lt;&nbsp; c-d &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; 1-c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; c-1 &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; 1.5-c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; c-1.5 &lt;&lt; endl;<br />
<br />
&nbsp; d *= 1;<br />
&nbsp; d *= 1.5;<br />
&nbsp; cout &lt;&lt;&nbsp; c*d &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; 9*c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; c*9 &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; 19.4*c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; c*19.4 &lt;&lt; endl;<br />
&nbsp; d /= 2;<br />
&nbsp; d /= 2.5;<br />
&nbsp; cout &lt;&lt;&nbsp; d/c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; 2/c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; c/2 &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; 2.5/c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; c/2.5 &lt;&lt; endl;<br />
<br />
&nbsp; cout &lt;&lt;&nbsp; b%c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; 5%c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; c%2 &lt;&lt; endl;<br />
<br />
&nbsp; cout &lt;&lt;&nbsp; c++ &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; ++c &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; c-- &lt;&lt; endl;<br />
&nbsp; cout &lt;&lt;&nbsp; --c &lt;&lt; endl;&nbsp;&nbsp;&nbsp; <br />
&nbsp; cout &lt;&lt;&nbsp; -c &lt;&lt; endl;<br />
&nbsp; <br />
&nbsp; int c1 = c;<br />
&nbsp; cout &lt;&lt; c1 &lt;&lt; endl;<br />
&nbsp; c1 = c;&nbsp; <br />
&nbsp; cout &lt;&lt; c1 &lt;&lt; endl;&nbsp; <br />
<br />
&nbsp; cin &gt;&gt; d;<br />
&nbsp; cout &lt;&lt;&nbsp; d &lt;&lt; endl;<br />
}</p>

# Input


# Output


# Sample_Input
```

```

# Sample_Ouput
```

```

# Hint



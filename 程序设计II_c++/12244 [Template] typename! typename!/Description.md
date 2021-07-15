# [Template] typename! typename!

# typename! typename!

# Description
<p>Given the following two classes TypeA, and TypeB: <br />
class TypeA<br />
{<br />
public:<br />
&nbsp; class SubType<br />
&nbsp; {<br />
&nbsp; public:<br />
&nbsp;&nbsp;&nbsp; string toString() {return &quot;subType in TypeA&quot;;};<br />
&nbsp; };<br />
};<br />
<br />
class TypeB<br />
{<br />
public:<br />
&nbsp; class SubType<br />
&nbsp; {<br />
&nbsp; public:<br />
&nbsp;&nbsp;&nbsp; string toString() {return &quot;subType in TypeB&quot;;};<br />
&nbsp; };<br />
};<br />
<br />
Write a template class MyClass that has a public variable named <strong>subtypeobj</strong> with type <strong>T::SubType</strong>.<br />
template &lt;class T&gt;<br />
class MyClass<br />
{<br />
public:<br />
//add your public member here<br />
}<br />
<br />
&nbsp; The following codes:<br />
MyClass&lt;TypeA&gt; obj1;<br />
cout &lt;&lt; obj1.subtypeobj.toString() &lt;&lt; endl;<br />
MyClass&lt;TypeB&gt; obj2;<br />
cout &lt;&lt; obj2.subtypeobj.toString() &lt;&lt; endl;<br />
<br />
&nbsp; output:<br />
subType in TypeA<br />
subType in TypeB<br />
&nbsp;</p>

# Input


# Output


# Sample_Input
```

```

# Sample_Ouput
```
subType in TypeB
subType in TypeA
subType in TypeA
subType in TypeB
```

# Hint



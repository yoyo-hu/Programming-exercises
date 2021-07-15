# [Operator Overloading]The Date class (version 1)

# The Date class (version 1)

# Description
<pre>
Implement the operator &lt;, &lt;=, ==, !=, &gt;, &gt;= with the class Date
class Date
{
public:
  Date(int y=0, int m=1, int d=1);  
  static bool leapyear(int year);
  int getYear() const;
  int getMonth() const;
  int getDay() const;

  // add any member you need here  
};

You implementation should enable the usage like this:
void f()
{
  Date date1, date2(2003,1,1);
  Date date3 = Date(2007,2,28);
  date3 = date1;

  cout &lt;&lt; &quot;year 1996 is leap year? &quot; &lt;&lt; Date::leapyear(1996) &lt;&lt; endl;
  cout &lt;&lt; &quot;year 1200 is leap year? &quot; &lt;&lt; Date::leapyear(1200) &lt;&lt; endl;
  cout &lt;&lt; &quot;year 1300 is leap year? &quot; &lt;&lt; Date::leapyear(1300) &lt;&lt; endl;
  cout &lt;&lt; &quot;year 1999 is leap year? &quot; &lt;&lt; Date::leapyear(1999) &lt;&lt; endl;

  cout &lt;&lt;  &quot;(date1==date3)? &quot; &lt;&lt; (date1==date3) &lt;&lt; endl;
  cout &lt;&lt;  &quot;(date1!=date3)? &quot; &lt;&lt; (date1!=date3) &lt;&lt; endl;
  cout &lt;&lt;  &quot;(date1==date2)? &quot; &lt;&lt; (date1==date2) &lt;&lt; endl;
  cout &lt;&lt;  &quot;(date1!=date2)? &quot; &lt;&lt; (date1!=date2) &lt;&lt; endl;

  cout &lt;&lt;  &quot;(date1&lt;date1)? &quot; &lt;&lt; (date1&lt;date1) &lt;&lt; endl;
  cout &lt;&lt;  &quot;(date1&lt;=date1)? &quot; &lt;&lt; (date1&lt;=date1) &lt;&lt; endl;
  cout &lt;&lt;  &quot;(date1&lt;date2)? &quot; &lt;&lt; (date1&lt;date2) &lt;&lt; endl;
  cout &lt;&lt;  &quot;(date1&lt;=date2)? &quot; &lt;&lt; (date1&lt;=date2) &lt;&lt; endl;
 
  cout &lt;&lt;  &quot;(date1&gt;date1)? &quot; &lt;&lt; (date1&gt;date1) &lt;&lt; endl;
  cout &lt;&lt;  &quot;(date1&gt;=date1)? &quot; &lt;&lt; (date1&gt;=date1) &lt;&lt; endl;
  cout &lt;&lt;  &quot;(date1&gt;date2)? &quot; &lt;&lt; (date1&gt;date2) &lt;&lt; endl;
  cout &lt;&lt;  &quot;(date1&gt;=date2)? &quot; &lt;&lt; (date1&gt;=date2) &lt;&lt; endl;
}
The output of f() should be:
year 1996 is leap year? 1
year 1200 is leap year? 1
year 1300 is leap year? 0
year 1999 is leap year? 0
(date1==date3)? 1
(date1!=date3)? 0
(date1==date2)? 0
(date1!=date2)? 1
(date1&lt;date1)? 0
(date1&lt;=date1)? 1
(date1&lt;date2)? 1
(date1&lt;=date2)? 1
(date1&gt;date1)? 0
(date1&gt;=date1)? 1
(date1&gt;date2)? 0
(date1&gt;=date2)? 0</pre>

# Input


# Output


# Sample_Input
```

```

# Sample_Ouput
```

```

# Hint



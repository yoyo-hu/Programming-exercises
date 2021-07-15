# [Inheritance]Virtual base class

# Virtual class

# Description
<p>设计一个基类base，包含姓名和年龄私有数据成员以及相关的成员函数，由它派生出领导类leader，包含职务和部门私有数据</p>
<p>成员以及相关的成员函数，再由base派生出工程师类engineer，包含职称和专业私有成员以及相关的成员函数。然后由leader</p>
<p>和engineer类派生出主任工程类chairman，采用一些数据测试。</p>
<p>基类：</p>
<div>class base</div>
<div>{</div>
<div>string name;</div>
<div>int age;</div>
<div>public:</div>
<div>base(){}</div>
<div>void setname(const string str);</div>
<div>void setage(const int age);</div>
<div>string getname() const;</div>
<div>int getage() const;</div>
<div>};</div>
<div>&nbsp;</div>
<div>提交时，需要提交类base、leader、engineer、chairman的定义与实现；</div>
<div>&nbsp;</div>
<div>主函数如下：</div>
<div>&nbsp;</div>
<div>
<div>
<div>int main()</div>
<div>{</div>
<div>//freopen(&quot;in.txt&quot;, &quot;r&quot;, stdin);</div>
<div>//freopen(&quot;out.txt&quot;, &quot;w&quot;, stdout);</div>
<div>int n;</div>
<div>cin&gt;&gt;n;</div>
<div>for (int i=0;i&lt;n;i++)</div>
<div>{</div>
<div>string name,job,dep,major,prof;</div>
<div>int age;</div>
<div>cin&gt;&gt;name&gt;&gt;age&gt;&gt;job&gt;&gt;dep&gt;&gt;major&gt;&gt;prof;</div>
<div>chairman man;</div>
<div>man.setname(name);</div>
<div>man.setage(age);</div>
<div>man.setjob(job);</div>
<div>man.setdep(dep);</div>
<div>man.setmajor(major);</div>
<div>man.setprof(prof);</div>
<div>&nbsp;</div>
<div>cout&lt;&lt;&quot;name: &quot;&lt;&lt;man.getname()&lt;&lt;&quot; age: &quot;&lt;&lt;man.getage()&lt;&lt;&quot; dep: &quot;&lt;&lt;man.getdep()</div>
<div>&lt;&lt;&quot; job: &quot;&lt;&lt;man.getjob()&lt;&lt;endl;</div>
<div>cout&lt;&lt;&quot;prof: &quot;&lt;&lt;man.getprof()&lt;&lt;&quot; major: &quot;&lt;&lt;man.getmajor()&lt;&lt;endl;</div>
<div>}</div>
<div>return 0;</div>
<div>}</div>
</div>
</div>
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
<p>注意：由于chairmen类是从leader类和engineer类派生而来，而leader类和engineer类都是从base类派生的，此时应该要注意什么</p>
<p>问题？</p>


# [Polymorphism] C++:Instance of

# C++:Instance of

# Description
<p>在Java语言里边，所有的对象都会继承Object类，但C++却是没有的</p>
<p>例如以下的一些类：</p>
<p>&nbsp;</p>
<div>class Object;</div>
<div>&nbsp;</div>
<div>class Animal:public Object;</div>
<div>class Dog:public Animal;</div>
<div>class Cat:public Animal;</div>
<div>&nbsp;</div>
<div>class Vehicle:public Object;</div>
<div>class Bus:public Vehicle;</div>
<div>class Car:public Vehicle;</div>
<div>&nbsp;</div>
<div>class Person:public Object;</div>
<div>class Student:public Animal;</div>
<div>class Teacher:public Animal;</div>
<div>&nbsp;</div>
<div>===============================================================</div>
<div>我们知道对象是可以向上向下转型的，就例如</div>
<div>Animal* animal = new Dog();</div>
<div>因为继承本身就是一种is-a的关系，狗就是动物，因此这样赋值是没问题的。</div>
<div>但是问题来了。倘若别人传递上述代码的animal对象给你，你这个时候却不知道它原本是Dog这个类的（在Java里边是有instance of 可以判断的），于是现在你的任务来了。</div>
<div>请完成以下函数以及类，使得满足instanceof函数可以返回该对象的类型名字。（注意这里的类全部都还没定义，你可以根据自己的思路去完成定义，完成的方法不限，能AC即可）</div>
<div>&nbsp;</div>
<div>================================================================</div>
<div>
<div>class Object;</div>
<div>&nbsp;</div>
<div>class Animal:public Object;</div>
<div>class Dog:public Animal;</div>
<div>class Cat:public Animal;</div>
<div>&nbsp;</div>
<div>class Vehicle:public Object;</div>
<div>class Bus:public Vehicle;</div>
<div>class Car:public Vehicle;</div>
<div>&nbsp;</div>
<div>class Person:public Object;</div>
<div>class Student:public Animal;</div>
<div>class Teacher:public Animal;</div>
</div>
<div>/*</div>
<div>&nbsp;* 一个Object对象</div>
<div>&nbsp;* 返回这个对象实例实际的类型名</div>
<div>&nbsp;* 例如： Object *obj = new Bus();</div>
<div>&nbsp;* 则instanceof(*obj) == &quot;Bus&quot;</div>
<div>&nbsp;*/</div>
<div>string instanceof(Object obj)</div>
<p>&nbsp;</p>

# Input
<p>&nbsp;N/A</p>

# Output
<p>&nbsp;N/A</p>

# Sample_Input
```
样例测试:

	Object *obj = new Dog();
	cout << instanceof(*obj) << endl;
	Object *obj = new Car();
	cout << instanceof(*obj) << endl;
```

# Sample_Ouput
```
Dog
Car

```

# Hint
<p>&nbsp;无需提交主函数！</p>


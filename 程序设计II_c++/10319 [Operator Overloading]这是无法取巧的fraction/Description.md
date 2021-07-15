# [Operator Overloading]这是无法取巧的fraction

# Description
In this assignment you are required to complete a class for fractions.

It stores the numerator and the denominator, with the lowest terms.

It is able to communicate with iostreams by the operator << and >>.

For more details, read the header file.

# Sample Input
```
1 0 2 3
```

# Sample Output
```

NaN NaN NaN NaN
NaN
False
True
False
False
True
True
```
# Hint:
输入的数据大小为short

如果分母为0，那么进行四则运算时返回一个0/0.

==操作符 相等的情况是 两个数分母都为0或者两个数本身相等。
```
 > <的操作就按正常的比较即可。即样例输入输出<>都为false的原因
```



选自zion.出题人:彭勃(TA)

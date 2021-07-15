# [Function]裴波那契数列-函数版

# Descrition
高中的时候学过裴波那契数列吧，现在编程实现一个函数，要求输入数列的下标，求出该位置的裴波那契数。

# Input
输入有多行

# Ouput
对于每一行输入，输出裴波那契数列中该位置的裴波那契数。

# Sample Input
```
1
2
3
4
5

```

# Sample Output
```
1
1
2
3
5

```

# Hint
[百度百科-裴波那契数列（右键“在新的标签页中打开”）](http://baike.baidu.com/link?url=K3E-oUfbABU_rZxO4vviyfnka9pZzm6I7vZlBnDLO6hVEefXSVmukk_9FalCDhx8wl8hg8POy9wNXHIgprazWStiNFSz-Q8uXlL01hSm-T-F_ZKShz5wKhskFWMbhZStdtgX6zRxGFpoH0K-ORWHK_)


当有多行输入时，可以尝试使用一下代码：
```c
while (scanf("%d", &a) != EOF)
```
# Week1 Basic iostream

# Basic iostream

使用`<iostream>`以及`<iomanip>`库操纵输入输出流。

输入一行，包含一个整数$n$，一个字符$c$，一个整数$w$。

输出这个整数$n$，要求控制输出宽度为$w$，左对齐，空白部分用字符$c$填充，且$n$为非负整数时显示$+$号。

保证$n$的宽度小于$w$。

## Input

```
4 c 6
```

```
0 v 6
```

```
-45 u 8
```

## Output

```
+4cccc
```

```
+0vvvv
```

```
-45uuuuu
```


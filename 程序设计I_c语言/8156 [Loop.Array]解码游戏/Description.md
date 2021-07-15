# [Loop.Array]解码游戏

# Description
Alice想给Bob发信息，他们约定了一种加密方式，规则如下：

假如 Bob 收到这样一个字符矩阵:
```
anml
bopk
cfuc
```
他会按逆时针方向读取这个矩阵，得到一个解码后的字符串
```
abcfucklmnop
```
不幸的是，当Bob想将解码后的信息发送给Ｔom时，却发现有些信息不完整，这是由于信息中含有敏感词, 这些敏感词会被和谐掉

比如上面例子，`fuck`是一个敏感词，所以当Tom收到信息时，会看到下面这样
```
abcf***lmnop
```

* 当有多个敏感词重叠时，只和谐第一个。例如，假设`fuck`和`kill`都是敏感词，则
`abcfuckill`　会被和谐成　`abcf***ill`
* 当多个敏感词有相同的前缀时，优先和谐那个在输入时顺序靠前的敏感词。例如，按顺序输入了两个敏感词 `kill` 和 `killing`，则 `abckillingxyz` 会被和谐成 `abck***ingxyz`

现在给你Bob收到的字符矩阵，输出Bob解码后的字符串和Tom看到的信息内容

## Input
第一行：两个整数，0 < m < 50, 0 < n < 50，代表矩阵的高度和宽度

接下来ｍ行是字符矩阵

接着是一个整数 t, 0 < t < 10, 代表敏感词个数

接下来ｔ行，每行一个敏感词，敏感词的长度小于 50

## Output
输出两行，分别是Bob解码后的字符串和Tom看到的字符串

## Sample Input
```
3 4
anml
bopk
cfuc
1
fuck
```

## Sample Output
```
abcfucklmnop
abcf***lmnop
```





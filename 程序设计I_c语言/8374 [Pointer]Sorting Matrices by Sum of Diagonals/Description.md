# [Pointer]Sorting Matrices by Sum of Diagonals

# Description

The task can be simply put as sorting square matrices by the sum of the elements on their two diagonals (main diagonal and anti-diagonal) in ascending order using ``qsort_s``.

# Input and Output Details

In the first line of the input are two integers, where the first integer ``total`` \\( (1 \le total \le 10) \\) represents the number of the matrices while the second one ``size`` \\((1 \le size \le 4)\\) represents the size of each matrix.

The following lines contain the matrices to be sorted separated by a newline ``\n``

After receiving the input, you should output the sorted matrices separated by a newline as well, which is also the case for the last matrix. That means there would be two ``\n`` following the last element of each matrix.

# Sample Input

```
3 3
0 1 0
1 0 1
0 1 0

1 0 1
0 1 0
1 0 1

-1 0 -1
0 1 0
-1 0 -1


```

# Sample Output

```
-1 0 -1
0 1 0
-1 0 -1

0 1 0
1 0 1
0 1 0

1 0 1
0 1 0
1 0 1


```

# 要点

> If you don't want to see my BB, you can skip this part. -- +C

> and guess what you are going to do. -- undefined

## ``MAX_TOTAL`` 和 ``MAX_SIZE``

本意是作为**宏**使用，需要我们根据上面的题目要求使用 ``#define`` 自行定义。

## 给函数传入矩阵

这里有两个简单的函数需要我们去实现。一个是 ``inputMatrices``，用于把数据输入矩阵。另一个是 ``printMatrices``，用于打印矩阵以及间隔的换行符。观察 ``main.c`` 中用户的需求，定义相应的函数。

要注意函数的模块分离思想：例如在编写 ``printMatrices`` 的时候，我们只需要知道，我们手头上有一个矩阵以及它的大小。然后根据这些信息进行矩阵的打印，不需要关心其他变量、其他过程怎么样。

另外一点需要注意的是，虽然说我们看上去是把一个二维数组传进了函数，但是 ``main`` 函数看到的矩阵和函数看到的矩阵是不一样的——传参数时发生了类型转换，结果二者的类型不同。

``main`` 函数看到的是 ``int [MAX_SIZE][MAX_SIZE]`` 类型的矩阵，而函数看到的实质上是一个 ``int (*)[MAX_SIZE]`` 类型的地址变量——即使你在参数列表写的是 ``int matrix[MAX_SIZE][MAX_SIZE]``

牢记变量的类型，是理解下面内容、甚至是理解指针的基础。这部分比较难理解，多思考是才是正道。

至于为什么输入输出一个矩阵的函数用的是复数形式的 ``matrices``，可能是出题人脑子短路了吧

## <a href="http://en.cppreference.com/w/c/algorithm/qsort" target="_blank">qsort_s</a>

这次的排序我们使用标准库 ``<stdlib.h>`` 自带的函数 ``qsort_s`` ...虽然想这么说，但好像gnu并没有实现它。没办法，我们只能使用gnu提供的 ``qsort_r`` 代替了。

因为比较简单，所以出题人就帮我们调用了。不过还是希望不太明白的同学能仔细学习下它各个参数的意思。

如果你的编译器不支持 ``qsort_r``，例如出现 ``undefined reference to qsort_r``，建议转战 ubuntu 进行编程。另外有些平台的有些奇怪的IDE会搞出一个奇怪的``qsort_s``，此时也建议转战 ubuntu 进行编程。或者你厉害的话，也可以自己搞一个替代品出来。

说正事。这次我们关注的是它的第4个参数。这个参数是一个**函数指针**。调用时可以给函数名取地址（``&``）后传进去，也可以直接把函数名传进去（语法糖）

我们需要理解的是传进去的函数有什么作用。实际上传进去的函数用于排序过程中的比较。也就是说排序时 ``qsort_s`` 内部通过调用该函数，来知道两个比较对象究竟是谁“大”谁“小”。

这个比较函数的思路是很简单的。采用模块分离的思想：拿到两个数 ``first``、``second``，如果想要 ``first`` 排在前面，就返回一个负数，表示 ``first`` “小”。想要 ``first`` 排在后面，就要返回一个正数，表示它“大”。返回0表示他们“相等”，顺序可以乱来。

关于各个参数的具体含义，网上的资料比我说的清楚，可供参考。

麻烦的是，怎么从 ``qsort_s`` 拿到两个变量进行排序。这个 ``qsort_s`` 是 **泛型** 的，体现在 ``void *`` 上。换句话说，不管是什么类型的数据，它都可以排。前提是得告诉它怎么比较大小。

然而在比较函数中，由于使用的是 ``void *``，**编译器并不知道我们在排什么东西**，于是我们得通过强制类型转换，把它转换回真正的类型才能比较。相当于 ``void *`` 是个中间人，只是地址的搬运工。

这里有一个复杂的比较函数需要我们实现，函数声明如下：

```
int cmpMatrices(const void *firstMatrixPtr, const void *secondMatrixPtr, void *sizePtr);
```

可以按照下面的思路获取矩阵的变量：

1. 现在我们拿到 ``const void *`` 类型的地址变量，指向代表我们的矩阵的 ``const void`` 类型。而我们期待的矩阵原来是 ``_____`` 类型
2. 我们需要从 ``const void`` 得到 ``_____`` 类型。这要从他们的地址入手：将 ``const void *`` 强制转化为 ``_____`` 取地址后的类型（如 ``int`` 取地址后是 ``int *``）
3. 强制类型转换后，就可以用 ``*`` 变量化了。最终得到矩阵。

``qsort_s`` 的第5个参数是比较时需要的额外信息，也作为比较函数的第三个参数传入比较函数。它也是这种 ``void *`` 的模式。我们以它为例讲解下上述套路：

1. 现在我们拿到 ``void *`` 类型的地址变量，指向代表矩阵size的 ``void`` 类型。而我们期待的size原来是 ``size_t`` 类型
2. 我们需要从 ``void`` 得到 ``size_t`` 类型。这要从他们的地址入手：将 ``void *`` 强制转化为 ``size_t`` 取地址后的类型，即 ``size_t *``
3. 强制类型转换后，就可以用 ``*`` 变量化了。最终得到矩阵的大小。

```
int cmpMatrices(const void *firstMatrixPtr, const void *secondMatrixPtr, void *sizePtr) {
  // ...
  size_t *matrixSizePtr = (size_t *)sizePtr;
  size_t matrixSize = *matrixSizePtr;
  // 现在获得了matrixSize，就可以在下面使用了！
  // ...
}
```

这里由于牢记了我们的目标——矩阵size——的类型——``size_t``，所以很快就得到了结果。如果记错类型，很可能会出现花式错误。那矩阵是什么类型呢？上面有提示了。

另外需要注意的是，如果我们想要比较的是两个 ``int`` 数组，长度是10，那么是没办法像上面一样写成

```
// size_t matrixSize = *matrixSizePtr;
// type identifier = *((type *)ptr)
int arrGetFromVoid[10] = *((int (*)[10])arrPtr);  // 不妙！
```

<s>因为我们是无法从其他类型得到 ``int [10]`` 类型的。数组的指针 ``int (*)[10]`` 变量化（``*``）后也只能变为 ``int *``，无法得到 ``int [10]``。

虽然 ``int (*)[10]`` 和 ``int **`` 这两者变量化（``*``）后得到的都是 ``int *`` 类型，但这绝不意味着``int (*)[10]`` 和 ``int **`` 是等价的。</s>

上面是错的。这里主要是，C语言在设计上，不支持数组的直接赋值。也就是说等号运算符左边不能是 ``int [10]`` 类型。但可以将它保存为 ``int *`` 类型。这便是数组->指针的隐式类型转换。

```
// int arrGetFromVoid[10] = *((int (*)[10])arrPtr);  // 错误
int *arrGetFromVoid = *((int (*)[10])arrPtr);  // 没办法，丢失了大小信息“10”
```

这部分确实比较难懂，我也讲的很乱。**如果毫无头绪，说明类型和指针的知识掌握的还不够牢固。先静下心来回顾这两块的知识吧**。可能也有同学抓住 数组名 和 数组地址 的 **值** 相等的特点，违反逻辑地进行强制类型转换。这不是特别提倡，只能说明这方面知识掌握得还不是很扎实。

祝过编译

# 思考

为了方便理解和入门，本题在排序交换时直接交换了整个二维数组。实际上这样损耗很大。思考下有没有什么更好的方案呢（如果可以自己写``main.c``）？

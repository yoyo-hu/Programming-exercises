# Day8 More Powerful Static Linked List---Balance

# Introduction

不知道你是否顺利实现了简单静态链表。在那个题目中，我们只是实现了很简单的增删操作。这次，让我们来再完善几个功能让他变得更强大吧！

# Description

这个附加题有点不太一样，让我们先基于简单静态链表来看下面的这一系列操作：

```
pushBack(&List, &Manager, value);
popBack(&List, &Manager);
pushBack(&List, &Manager, value);
popBack(&List, &Manager);
pushBack(&List, &Manager, value);
popBack(&List, &Manager);
............
```

考虑一下，在这样不断pop和push的过程中，你的Manager实现是否是不断地对同一个下标值进行赋值与释放？

事实上，如果真的是在管理内存的话，不断对不变的一处内存进行读写，同时其余范围的内存一直闲置，不仅损失性能，从系统安全角度来说，也会有一定的风险。

因此，你是否能想个办法，让Manager的分配无论在什么情况下，都可以平均地利用到每处内存？

放心，这个任务远比它的描述看上去简单，某种 ```Manager``` 实现可以原封不动将简单静态链表的代码copy过来。

程序会监控每个位置被使用的情况，你需要做的就是使得整个程序运行下来，每个位置被申请的次数基本相同。

*某种实现方法会以极低概率出现非酋附体的情况而导致无法通过。如果确定自己是这种实现方法的话，可以尝试多次提交（太多次过不去就还是回去查一下代码吧）*


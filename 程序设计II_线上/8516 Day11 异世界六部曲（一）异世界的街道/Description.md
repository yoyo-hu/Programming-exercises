# Day11 异世界六部曲（一）异世界的街道

### 背景故事

*这题的出题人正在看番，忽然天空中传来伟大的会长的声音：“在？有空吗？过来出个题？”*

*出题人悲伤地关掉 B 站，准备去便利店买点零食再工作。晕乎乎地从便利店出来，出题人突然发现自己到了个不知道什么地方。这里是中世纪的建筑风格，人们也穿着中世纪的衣服，巨大的蜥蜴拉着车在街上跑，一个卖苹果的大叔喊你：“喂，不买苹果别挡着我做生意！”*

*出题人突然醒悟：我被召唤到异世界了！！*

*初到异世界，出题人很兴奋，想要试试自己获得了什么超能力。然而试了半天，他悲哀地发现自己啥都不会，还遇到了混混。*

### 题目描述

异世界的街道里，共有 $n$ 个混混，$m$ 个平民，以及出题人。大家都在随机游走，其中每分钟：

1. 恰有两个人遇到。

2. 任意两个人之间相遇的概率是均等的。

如果两个平民相遇，没有事情发生；

如果两个混混相遇，他们会互相厮打，最终一起死亡；

如果混混遇到平民，混混就会杀掉平民；

如果混混遇到出题人，哈哈。。。。出题人的死亡回归能力还没觉醒，要客死他乡了；

如果出题人遇到平民，那么出题人会等概率选择杀掉他或不杀掉他。

问出题人活下来去见艾米莉亚的概率。

### 输入格式

一行，两个整数，$n$ 和 $m$。（$0 \leq n,m \leq 1000$）

### 输出格式

一行，一个浮点数（保留 4 位小数），表示出题人存活的概率。

### 样例输入

0 0

### 样例输出

1.0000
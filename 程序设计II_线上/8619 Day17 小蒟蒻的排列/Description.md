# Day17 小蒟蒻的排列

# 题目描述

这一切都要从一只蝙蝠说起。小蒟蒻宅在家这么多天，头上都快长蘑菇了。为了打发时间，他拿出自己珍藏多年的积木，开始排列积木。

小蒟蒻有2 * n块积木，每块积木都有一个高度ai，因为小蒟蒻有强迫症，所以同样高度的积木有且只有一模一样的两块。

小蒟蒻把这些积木从左到右排成一排，小蒟蒻认为一个排列是美观的，当且仅当任意两块高度为 x 的积木之间恰好间隔 x 个其它木块。

比如说n = 3，ai = [1,2,3]时，3，1，2，1，3，2就是一个美观的排列。给定n和ai，小蒟蒻现在想知道有多少种美观的排列。

由于高度相同的积木长得都一样，所以在上面这个例子中的3，1，2，1，3，2，不论哪个高度为3的积木放在前面，小蒟蒻都将把它们看作是同一种方案！

这可难倒了年幼的小蒟蒻，你能帮帮他吗？

# 输入格式
输入的第一行包括一个整数 n (1≤n≤12)，表示小蒟蒻一共有2 * n块积木。

输入的第二行包括 2 * n 个整数 ai (1≤ai≤2 * n)，表示这 2 * n 个积木的高度。保证同样高度的积木有且只有一模一样的两块。

# 输出格式
你需要输出一行1个整数 ans,表示美观的排列的数量。

# 样例输入
	3 
	1 1 2 2 3 3

# 样例输出
	2

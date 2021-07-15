# [Algorithm]A Card Game

# description

Xiao Ming is playing an interesting game with computer. In each turn, the computer will give Xiao Ming a series of digits among 0, 3, 5, 7, 9.  
If Xiao Ming can tell the computer the number divisible by 30 as large as possible, which consists of all the digits, he will win.  
Now your task is helping Xiao Ming find out this number if it exists.  
The input contains 2 lines. The first line is the total number of digits n (1 <= n <= $10^5$) of game. The next line contains n digits among 0, 3, 5, 7, 9.

The output contains one line. If the number exists, print the number. if it doesn't exist print "no such number".

# Sample Input

```
6
3 5 7 7 3 0

```

# Sample output

```
no such number

```

# Hint

The first idea in your mind may be sorting the numbers, but it may exceed the time limit since the size of array can be very large.  
You can search the knowledge about [bucket sort](https://www.google.com.hk/search?q=bucket+sort&oq=bucket+sort)

# （2019级期末考试）The Growth Road of Jack

## Description
Jack is addicted to online games. Once, he is playing a game of fighting monsters and upgrading. The initial ability value of his character is a. In the next period of time, he will meet n monsters in turn, each with a defense of $b\_1, b\_2, b\_3, \dots, b\_n$ . 

If the monster's defense bi is less than or equal to his current ability value c, then he can easily defeat the monster and increase his ability value by $b\_i$; if $b\_i$ is greater than c, then he can also defeat the monster, but his ability value can only increase the greatest common divisor of $b\_i$ and c.

So after a series of exercises, what is Jack's final ability value?

## Input
The first row is the number of test data groups.

For each group of test data, the first row is two integers, n ($1 \le n < 100000$), indicating the number of monsters, and a, indicating the initial ability value of Jack. The second line is n integers.$b\_1, b\_2, b\_3, \dots, b\_n$ ($1 \le b\_i \le n$) indicates the defense of each monster.

## Output
For each group of test data, output one line which only includes the the final ability value of Jack. 

## Examples
Input：

```
2
3 50
50 105 200
5 20
30 20 15 40 100
```

Output:

```
110
205
```

# [array] Star's Problem

# Description

Star thinks Joe's problem "Sum" is too young too simple, so he added two operations.  

Give a sequence of N numbers and M operations, there are three types of operations:  
Operation 1: Change all the number to its opposite number;  
Operation 2: Add an integer X to all the numbers;  
Operation 3: Print the sum of the subsequence in [L, R].  

Now it's your job, good luck.

# Input

The first line is two integers N and M (0 < N < 20000, 0 < M < 200000), means the length of sequence and the number of operations.  
The second line has N integers, indicate the sequence.  
The follow M lines shows the operations:  
"1"         Operation 1  
"2 X"       Operation 2, X is an integer  
"3 L R"     Operation 3, L and R is integer  
Numbers in sequence and X in Operation 2 has a absolute value less or equal to 100.

# Output

The result of Operation 3, one per line.

# Sample Input
 
```
5 5
1 2 3 4 5
3 1 1
1
3 1 3
2 5
3 4 5
```

# Sample Output

```
1
-6
1
```

# Hint

You should use `scanf`, `printf`, and `long long`.
opposite number: 相反数

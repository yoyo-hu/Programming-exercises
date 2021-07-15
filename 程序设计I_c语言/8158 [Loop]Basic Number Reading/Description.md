# [Loop]Basic Number Reading

# Description

Since anything in the input is characters, you might have wondered how functions like ``scanf`` are able to extract an integer for you from the characters, or more precisely, how can we convert a string to an integer.

Now I'd like to invite you to try a straightforward algorithm of converting a string to a non-negative integer the string represents. **It is suggested that you try to implement the algorithm by yourself and NOT use functions to like ``strtol`` to achieve our goal without efforts IN THIS ASSIGNMENT. In practical applications, however, you are encouraged to directly utilize them so as to focus on your major logic.**

## Example: Read 12345 in base 10

Suppose we would get ``12345`` from the input. ``'1'``, ``'2'``, ``'3'``, ``'4'``, ``'5'`` would all be characters before further processing.

We would need a loop to get the characters one by one. First we would get ``'1'``, then ``'2'``, ``'3'``,... until beyond ``'5'``.

### Obtain 12345

To obtain the integer ``12345``, we use a variable ``result`` to store the final integer, which could be initialized to be ``0``.

- Firstly we get ``'1'`` and thus are able to obtain and store the integer ``1`` in ``result``.

- Then, we can obtain ``2``. We would change to ``result`` to ``12`` by **multiplying the previous result ``1`` by the base ``10`` and adding the current ``2`` to it**.

- Similarly, after obtaining ``3``, ``4`` and ``5``, we may change the result to ``123``, ``1234``, and finally, ``12345``.

|loop count|previous result|current digit|current result|
|:---:|:---:|:---:|:---:|
| 1 | 0    | 1 | 1     |
| 2 | 1    | 2 | 12    |
| 3 | 12   | 3 | 123   |
| 4 | 123  | 4 | 1234  |
| 5 | 1234 | 5 | 12345 |

### Obtain 54321

To obtain the reverse ``54321``, we use ``result`` to store the final integer, which could be initialized to be ``0``, and ``weight`` to cache the weight of the current digit, which could be initialized to be ``1``.

Note that the input is still ``12345``.

- Firstly we get ``'1'`` and thus are able to obtain and store the integer ``1`` in ``result``, after which the weight should get updated from ``1`` to ``base``.

- Then, we can obtain ``2``. We would change to ``result`` to ``21`` by **multiplying the current digit ``2`` by the base ``10`` and adding it to the previous result ``1``**. Don't forget to update the weight from \\( base \\) to \\( base^2 \\)

- Similarly, after obtaining ``3``, ``4`` and ``5``, we may change the result to ``321``, ``4321``, and finally, ``54321``.

|loop count|previous result|current digit|current weight|current result|
|:---:|:---:|:---:|:---:|:---:|
| 1 | 0    | 1 | 1     | 1     |
| 2 | 1    | 2 | 10    | 21    |
| 3 | 21   | 3 | 100   | 321   |
| 4 | 321  | 4 | 1000  | 4321  |
| 5 | 4321 | 5 | 10000 | 54321 |

# Details

In the first line of the input is the number of test cases ``n`` \\( (1 \le n \le 10) \\), followed by an integer ``b`` \\( (2 \le b \le 10) \\).

Each of the following ``n`` lines is a test case, containing one integer \\( (1 \le integer \le 10^8) \\) **in base ``b``**.

Output both **the integer and the reverse** of the integer in **base 10**, omitting leading zeros for simplicity.

Note:

- The reverse of ``00012`` would be ``21000``, not merely ``21``.

- The reverse of ``21000`` would be output as ``12``, not ``00012``.

# Sample Input 1

```
2 10
12345
67890

```

# Sample Output 1

```
12345 54321
67890 9876

```

# Sample Input 2

```
9 2
1
011101
110110
10010
0
10101101
1
00
11010

```

# Sample Output 2

```
1 1
29 46
54 27
18 9
0 0
173 181
1 1
0 0
26 11

```

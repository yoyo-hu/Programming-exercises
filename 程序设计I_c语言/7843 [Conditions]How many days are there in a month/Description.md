# [Conditions]How many days are there in a month?

# Description
Given two integers representing a year and a month, could you tell me how many days there are in a month?

If the input is valid, you should output in the format ``xxxx/xx has xx days.`` where each ``x`` represents one digit.

Valid input requires:

  - \\(0 \le year \le 9999\\)
  - \\(1 \le month \le 12\\)

Otherwise, simply output ``Invalid Input Detected.``

Check out the following samples for more information.

A newline ``\n`` is expected after the output.

# Sample 1

### Input

```
2016 10

```

### Output

```
2016/10 has 31 days.

```

# Sample 2

### Input

```
0900 02

```

### Output

```
0900/02 has 28 days.

```

# Sample 3

### Input

```
10000 02

```

### Output

```
Invalid Input Detected.

```

# Hint

- Check the validity of input **before** computing the number of days
- Think about what **format specifiers** to use for output format like ``0012`` and ``03`` for the number of ``12`` and ``3``
- Take into consideration the use of ``switch`` to make your codes **cleaner and easier** to maintain where it would be possible (but a **BAD** practice) as well to write a long serious of ``if (month == 1 || month == 3 || month == 5 || ...``

# Further

You might have not noticed that **Static Check** has been shut down for this problem. This is because the straightforward way would violate the rule of <a href="http://docs.oclint.org/en/stable/rules/size.html#highcyclomaticcomplexity" target="_blank"><code>high cyclomatic complexity</code></a>. A student from SYSU would have some further thinking to do on this assignment.

- [ prerequisites: bitwise operators ] Except for February, find out how the ``final result`` is influenced by ``whether the month index is an even number`` and ``whether the month index is less then eight``. List a **truth table** of the three and try to solve this problem again.

- [ prerequisites: basic usage of array ] Are there any other ways to obtain the numbers of days without using ``if`` or ``switch``? You might want to think about constructing a **map** with the help of an array to solve this problem again.

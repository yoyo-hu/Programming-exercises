# [Conditions]Sum up two numbers conditionally

# Description

You will be given two positive integers ``num1`` and ``num2`` (which is also the order of input) and are required to output the result according to the following process:
- sum them up as the result if their sum is divisible by ``num2``
- otherwise keep ``num1`` as the result

Integers given are within [1, 1000000]

A new line ``\n`` is also expected after the result.

# Sample 1

## input

```
4 2

```

## output

```
6

```

# Sample 2

## input

```
15 4

```

## output

```
15

```

# Further

Is there a way to solve the problem without using control structures like ``if``?

### Hint

Relation expressions and equality expressions return ``0`` for ``false`` and ``1`` for ``true``.  
Given ``20 10`` you may obtain ``20`` by evaluating ``20 + 10 * 0`` and ``30`` by evaluating ``20 + 10 * 1``. This way is not that worth it in this problem but still worth taking into consideration on some other occasions.


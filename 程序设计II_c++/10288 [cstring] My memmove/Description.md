# [cstring] My memmove

# My `memmove`

## Description

Implement a function `char* my_memmove(char *dst, const char *src, unsigned int n)`.

### Detail

See `main.cpp`.

**Try NOT to use another memory/array to do this, just do it `in` the array**

### Sample Input

Input guarantees that the length won't cause overflow.

```
abcdefghijklmnopqrstuvwxyzabcde
0 5 10
```

### Sample Output

```
abcdeabcdefghijpqrstuvwxyzabcde

```

## Hint

`memmove` is a function from `<string.h>`, you can see the reference [here](http://www.cplusplus.com/reference/cstring/memmove/).

In a word, it's a function like `strncpy`. If you don't know it, you must know `strcpy`, a not really safe function. `strncpy` can copy cstring as `strcpy`, but you can set a **maximum size** to copy, which means you can avoid overflow using this (It's safer!). See the reference [here](http://www.cplusplus.com/reference/cstring/strncpy/?kw=strncpy).

### What's the differences?

In standard library, the **source** and the **destination** `strncpy` can't overlap(重叠). And, `strncpy` will **check the null-character('\0')**, but `memmove` won't.

### Then?

Here, you are going to implement one `memmove` by yourself.

Some of you guys may be smart and may try to use `#define my_memmove memmove` to do the trick, but it seems that `<string.h>` or `<cstring>` are **banned** here. Oh, what a bad news!

Anyway, happy coding!
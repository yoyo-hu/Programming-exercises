# [Pointer]Swap Anything

# Swap Anything

> Edit (2017.12.30): `void memcpy(void*, void*, size_t);` Thank kawaxqx for pointing it out!

## Problem

Implement the function `void swapAnyThing(void *a, void *b, size_t val_size);`.

It is used to swap something. Maybe `int`, maybe `double`, or something else.

+ `a`, `b` are the variables' **pointer**
+ `val_size` is the size of the variable type

## Hint

+ `void*` means it is a pointer, but we don't know what its type is.
+ `size_t`
	+ Generally, it is `unsigned int`, which is defined in a header file.

### Something you can learn yourself

+ [`memcpy`](http://www.cplusplus.com/reference/cstring/memcpy/)
	+ Use it to copy things. It will copy the bytes from **source** to **destination**.
	+ For example, you may use `a = b` before. Now you can use `memcpy(&a, &b, sizeof(a))` instead. (Think about the use of `&`!)
	+ If you know the **size** of variable, regardless of its type, you can use `memcpy`.
+ [`malloc`](http://www.cplusplus.com/reference/cstdlib/malloc/)
	+ Use it to allocate memory dynamically.
	+ Maybe you should know [`memset`](http://www.cplusplus.com/reference/cstring/memset/), too.
	+ If you want a space of `n` bytes. `void *mid = malloc(n)`.
+ [`free`](http://www.cplusplus.com/reference/cstdlib/free/)
	+ Use it to release the memory that you allocate yourself. When you use `malloc`, there should be a `free`.
	+ **OTHERWISE**, you will probably fail the Memory Check.

> `memcpy`, `malloc`, `free` above can be clicked. Or you can search for them in [cplusplus](http://www.cplusplus.com/).

### Think how you swap two `int`

Swap a, b:
```
mid = a;
a = b;
b = mid;
```
Then they are swapped.

`mid` isn't given, but you can make one yourself. (Using the parameter -- `val_size`)

And then, do the same as how you swap two `int`.

---

Maybe there are some tricks to work out this assignment, but please try to learn more.

More? For example, what is `struct`? (You can see it in `main.c`)

Enjoy coding!

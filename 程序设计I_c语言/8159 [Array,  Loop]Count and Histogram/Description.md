# [Array,  Loop]Count and Histogram

## Story
> **These characters in this story and this story are only fiction.**

+7 dalao got an English passage. His heart has no 波动, and he even wants to publish a problem.

"Let them count the letters in it, hahaha~", he thought.

"How about letting them display a diagram, hhhhhhhhhh", +C said.

## Problem

**Input** an **n**-length string **(0 < n <= 400)**, count how many **letters** and **words** in it.

Only `'a'-'z'`,`' '(space)`,`'\n'(new line)` in the string, end with **EOF**.

Regard it as word, if it is some letters serial. For example,

```
abc hello
world hhhhhhh nnnnnnnn
some letters together
```

There are **8** words.

---

**Output** the statistics like a **Histogram(柱状图)**. For example

```
9	                   *
8	                   *
7	                   *
6	                   *
5	   *           *   *
4	   * *         *   *
3	** ****        **  *
2	*********      ** **
1	********************
 	abdefgijlnoprstuwxyW

```

```
// the real string
"9\t                   *\n"
"8\t                   *\n"
...
"1\t********************\n"
" \tabdefgijlnoprstuwxyW\n"
```

### Detail

+ x-coordinate
  + the letters, with no space between each other and they should be in order
  + if the amount of this letter is `0`, do not show it
  + after the last letter is `W`(Capital W), representing the amount of **words**
+ y-coordinate
  + `1-9`, making it more human-readable
  + to make it separate with the `*` on its right, use `'\t'`
+ diagram
  + use one `*` for one count
  + if there is no `*`, use `' '(space)`
  + no extra line on the top, which means each line has `*` except the last line.

### Sample Input 1
```
a
```

### Sample Output 1

```
1	**
 	aW

```

### Sample Input 2
```
hello world

```

### Sample Output 2
```
3	   *    
2	   **  *
1	********
 	dehlorwW

```

---

## Hint
Happy coding. /wx
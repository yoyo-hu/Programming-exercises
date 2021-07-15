# （2019级期末考试）Convert to Chinese capital amount

### Description

Given a integer number n, covert n to Chinese capital amount.

The conversion rules are as follows:

1. The beginning of Chinese capital amount should be marked with "人民币". Other Chinese capital amount figures that can used are "壹", "贰", "叁", "肆", "伍", "陆", "柒", "捌", "玖", "拾", "佰", "仟", "万", "亿", "元", "零" and "整".
2. Since the entered amount is integer, "整" should be added to the end of amount, e.g., “532” should be converted to “人民币伍佰叁拾贰元整”.
3. If there is one or more than one "0" in the middle of number, "零" should be added to the corresponding position of Chinese capital amount, e.g., “502” should be converted to “人民币伍佰零贰元整”,  "105000" should be converted to "人民币拾万零伍仟元整". If there are several "0" in the middle of the number, only one "零" should be added, e.g., “6007” should be converted to “人民币陆仟零柒元整“.
4. If there is one or more than one "0" at the end of number, there is no need to add "零", e.g., "1680" should be converted to "人民币壹仟陆佰捌拾元整".

### Hint

Chinese capital amount: 中文大写金额

### Input Description

An integer number n. (1 <= n <=  1000, 000, 000)

### Output Description

The corresponding Chinese capital amount.

### Sample Input 1

```
151121
```

### Sample Output 1

```
人民币拾伍万壹仟壹佰贰拾壹元整
```

### Sample Input 2

```
532
```

### Sample Output 2

```
人民币伍佰叁拾贰元整
```


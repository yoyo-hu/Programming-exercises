# [string]异构体

# Description
异构体是指两个字符串所含有的字母完全一样，并且每个字母出现的次数也完全一致。比如

* `listen` 和 `silent` 是异构体
* `abcda` 和 `baadc` 是异构体
* `abc` 和 `abcd` 不是异构体

给出两个字符串 a 和 b，请你判断其是不是异构体。

## Input
两个字符串 a 和 b，字符串的长度不超过 100，且只包含小写字母
## Output
若是异构体，输出 `Yes`，否则输出 `No` 

## Sample Input
```
listen
silent
```
## Sample Output
```
Yes
```
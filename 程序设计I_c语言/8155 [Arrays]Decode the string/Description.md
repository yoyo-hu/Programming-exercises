# [Arrays]Decode the string

# Description

XiaoMing is a student of BigMount Middle School. One day, he wants to send a very very long message to his friend, Bob. His SIM card is China Mobile. As we all know, the fee of cellphone data plan is very expensive. To save money, he thinks of an idea to shorten the message. He uses a number to indicate how many times of the letter before appears.

For example, he replaces **"aaa"** with **"a3"**. (3 indicates there are three 'a')

After sending the message, he tells Bob the rule. But Bob is a little clumsy. He doesn't know how to decode the message.

Now please help Bob to decode the string he received to get the original message.

## input
a string which Bob received, including character and number(**no space**). The number is in [1, 1000]. And the length of the string is less than 100.

## output 
the original string
> Note: The number N in the string may be too big, which makes the output too long. So before output, if N > 7, you need to let N = N % 7 + 1

## sample input
```
a3.3kil2me.h3!23
```

## sample output
```
aaa...killme.hhh!!!

(23 % 7 + 1 = 3, so we just output three '!')
```
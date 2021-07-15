# [Classes and Objects]Single Dog

# Description
As we all know, there are many single dogs in SYSU, especially in SDCS. Now let's create a class named SingleDog to represent them and count the number of existing dogs.

# Detail
The `SingleDog` has two member:
* **id**--the identifier of a `SingleDog`, once a dog is created, its identifier can't be changed any more(so it is `const`);
* **name**--the name of a `SingleDog.` You should manage the memory to store the name by yourself.

And there is a static member--`count`. It's used to count the number of existing dog. If a new dog is created, we increase it. If a dog is destroyed, we decrease it. You should initialize it with `0`. 

You can read the `SingleDog.h` to know more detail. (=_=)

## Sample Input
```
2
I_love_TA
helloworld
```

## Sample Output
```
Number of SingleDog: 3
SingleDog 1. My name is I_love_TA
Number of SingleDog: 3
SingleDog 2. My name is helloworld
Number of SingleDog: 1
SingleDog 0. My name is wangwang
```




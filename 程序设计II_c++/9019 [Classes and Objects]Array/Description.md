# [Classes and Objects]Array

## Introduction

You must enjoy the programming task last time. For this time, we are going to finish a familiar data structure named array. You can reference to c++11 standard library.

 

## Requirements

### Array class

Arrays are fixed-size sequence containers: they hold a specific number of elements ordered in a strict linear sequence.

### Container properties

#### Sequence

Elements in sequence containers are ordered in a strict linear sequence. Individual elements are accessed by their position in this sequence.

#### Contiguous storage

The elements are stored in contiguous memory locations, allowing constant time random access to elements. Pointers to an element can be offset to access other elements.

#### Fixed-size aggregate

The container uses implicit constructors and destructors to allocate the required space statically. Its size is compile-time constant. No memory or time overhead.

 

## Requirements

Finish the member functions of the class according to the comments.

 

## Notice

Be careful when you meet pointers in c++. (Memory control)
Pay attention to the prototype of the member functions, it contains most of the information.
Any sorting algorithm is available for the function sort.

**In *resize* function, newSize > oldSize is promised.**
 

## Deep Thinking and Discussion

We have arrays in the c++ build in types, but why is it necessary for c++ standard to add a class for it?
What will happen if we set the size of the array to zero? What does zero length array mean?
Assume that class A is empty(i.e. class A {};), then what is sizeof(a)?Why?
 

## More

If you have any ideas or thoughts about C++ D&A. Just leave a message below or send me a mail.

Next we will have linear list practice. It will have a lot of use of pointers and dynamic memory allocation.

## Hint
An review recommendation(15 c language learning class 1): https://github.com/wujr5/c-and-cpp-language-learning/issues/46


#### * SourceAuthor: 叶嘉祺 *
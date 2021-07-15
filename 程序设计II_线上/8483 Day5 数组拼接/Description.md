# Day5 数组拼接

编写一个Catenate函数实现将两个int型数组拼接在一起并以指针形式返回新数组。

Catenate函数的原型为```int* Catenate(int a[], int b[], int len1, int len2)```，其中a和b两个需要拼接的数组，len1是a中元素个数，len2是b中元素个数。返回一个int\*型指针，指向一个数组，数组中前部分为a的内容，后部分为b的内容。两个数组的长度均小于等于100，每个元素小于10000。

**注意，只需要实现Catenate函数即可，main函数已经写好。详见Main.cpp文件。**
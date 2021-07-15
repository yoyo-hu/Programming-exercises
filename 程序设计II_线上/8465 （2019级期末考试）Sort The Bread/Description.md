# （2019级期末考试）Sort The Bread

# Description
There are 10 kinds of bread and we know their prices, weights and sizes repectively. Please sort the breads using a special key in the descending order. The key is defined as: `price + weight + size - max(price, weight, size)`.  
You need to complete the function `void sort(struct Bread breads[], int size)`.  
If two key are equal, sort them in  the same order as their initial order.  An example is showed to explain it:  
Before sort: 
```
5 6 7
1 2 3
7 6 5
```
after sort:
```
5 6 7
7 6 5
1 2 3
```
# Input format
There are 10 lines in the input, and there are 3 double numbers in each for the price, weight and size of the i-th bread.   
```
p1 w1 s1
p2 w2  s2
...
p10 w10 s10
```
# Output format
There are 10 lines in the output, and there are 3 double numbers in each for the price, weight and size of the i-th bread.   
```
P1 W1 S1
P2 W2 S2
...
P10 W10 S10
```
# Example input
```
261 796 170
303 678 999
653 343 325
175 744 784
545 92 756
34 705 682
758 600 520
773 723 983
646 865 440
152 301 409
```
# Example output
```
773.000000 723.000000 983.000000
758.000000 600.000000 520.000000
646.000000 865.000000 440.000000
303.000000 678.000000 999.000000
175.000000 744.000000 784.000000
34.000000 705.000000 682.000000
653.000000 343.000000 325.000000
545.000000 92.000000 756.000000
152.000000 301.000000 409.000000
261.000000 796.000000 170.000000
```
		
		
		
		
		
	 
	 
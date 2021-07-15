# [Arrays]D. Liang 6.19 Sorting students on grades

<!-- 1099. 6.19 Sorting students on grades
Time Limit: 1sec Memory Limit:256MB  -->
# Description
Rewrite Listing 6.12, GradeExam.cpp, to display the students in increasing order of 
the number of correct answers.

Suppose the answers for all students are stored in a two-dimensional array. 

Each row 
records an student's ten answers with ten columns. 

For example, the following array 
stores the answers for 3 students. 
```
              0   1   2   3   4   5   6   7   8   9   
Student   0   A   B   A   C   C   D   E   E   A   D   
Student   1   D   B   D   C   C   D   A   E   A   D   
Student   2   E   D   D   A   C   B   E   E   A   D   
```
The key is stored in a one-dimensional array, as follows:
```

              0   1   2   3   4   5   6   7   8   9   
Key           D   B   D   C   C   D   A   E   A   D   
```
# Input
The first line is a positive integer t for the number of test cases.

Each test case contains m+2 lines. 

The line 1 contains an integer m (0<m<=100) for number of the stuents. 

Then followed m lines, each line contains 10 integers seperated by blanks, for one student's answers. 

And the following line  contains 10  keys of correct answers.
# Output
For each test case,output each student's number and the number of correct answers in increasing order of the number of correct answers. Use the format like the sample output.
# Sample Input
```
2
3
A B A C C D E E A D
D B D C C D A E A D
E D D A C B E E A D
D B D C C D A E A D
2
B B E C C D E E A D
A B D C C D E E A D
A B D C C D E E B D
```
# Sample Output
```
test case 1:
Student 2: 5
Student 0: 7
Student 1: 10
test case 2:
Student 0: 7
Student 1: 9
```

Problem Source: 程序设计I Chapter6 Arrays

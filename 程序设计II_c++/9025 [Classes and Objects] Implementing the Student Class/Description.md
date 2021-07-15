# [Classes and Objects] Implementing the Student Class

## Description
```
 The class "Student" is declared as below.
Student {
public:
  Student();
  Student(int, char*, int);
  void set(int, char*, int);
  void print() const;
private:
  int id;
  char name[50]; 
  int age; 
};
Please implement the class to get expected output. You don't need to submit the main function.
If the following main function is used, your implementation should get the expected output in the sample.
 int main() {
  Student std1, std2(123, "John Smith", 19), std3(124);
  std1.set(100, "Bill Gates", 55);
  std1.print();
  std2.print();
  std3.print();
  return 0;
}
 
1) You don't need to submit the main function.
2) You don't need to include the header file for class declaration by yourself.
```
## Output
```
Bill Gates (100) is 55 years old.
John Smith (123) is 19 years old.
No Name (124) is 0 years old.
```
## Hint
```
 1) the type "char *" can be used as "char[]"
2) please use C-string library functions to handle char * and char[]
3) please use default arguments to handle different argument lists.
Problem Source: Object and Class -Cont

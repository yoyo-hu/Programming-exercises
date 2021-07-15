# [Classes and Objects] The Foo Class

## Description
```
Given the following implementation of a class "Foo", you are required to provide the declaration of the class.
You don't need to submit the main function. The declaration of Foo is enough.
 
Foo::Foo()
{
   x = 0;
   y = 0;
}
Foo::Foo(bool b)
{
if(b){
cout<<"please enter x and y.\n";
cin>>x>>y;
}
   else x=y=0;
}
void Foo::p() const
{
cout << "x is " << x <<", "<< "y is " << y <<".\n";
}
 
A main function is provided in background, for example:
 
int main()
{
  Foo f1, f2(true);
  f1.p();
  f2.p();
  return 0;
}
```
## Input
```
With the example main funtion above, an example input:

234 56
```
## Output
```
With the example main funtion and example input above, the output should be:


x is 0, y is 0.

x is 234, y is 56.

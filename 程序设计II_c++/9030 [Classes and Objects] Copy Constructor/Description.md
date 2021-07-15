# [Classes and Objects] Copy Constructor

# Description
 
Add a copy constructor to the Person class, which should perform deep copy. 

 //Note : you may fill the Date class !
 ```
 
class Date
{
public:

    Date(int y, int m, int d) { year=y; month=m; day=d; }
       
    int getYear() const{ return year; }
       
    void setYear(int y) { year = y; }
       
private:

    int year, month, day;
       
};
 
class Person

{

public:

    Person(int id, int year, int month, int day) {
       
        this->id = id;
               
        birthDate = new Date(year, month, day);
               
    }
       
    ~Person() { delete birthDate; }
       
    int getId() const { return id; }
       
    Date* getBirthDate() const{ return birthDate; }
       
       
private:

    int id;
       
    Date* birthDate;
       
};
```
Your submitted source code should include the whole implementation of the Date and Person classes . 
No main() function should be included.

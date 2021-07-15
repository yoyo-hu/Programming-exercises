#include <iostream>
#include <cstring>
using namespace std;
class Student
{
public:
  int id;
  char name[50]; // Data field
  int age; // Data field
  Student();
  Student(int, const char* = "No Name", int = 0);
  
};

void set(Student &, int, const char*, int);
void print(Student) ;

Student::Student() {
	id=0;
	strcpy(name, "No Name");
	age=0;
}
Student::Student(int pid, const char* pname, int page) {
	id=pid;
	strcpy(name, pname);
	age=page;
}
void set(Student&stu, int id, const char* name, int age) {
	stu.id=id;
	stu.age=age;
	strcpy(stu.name, name);
}
void print(Student stu) {
	cout<< stu.name <<" ("<<stu.id<<") "<<"is "<<stu.age<<" years old."<<endl;
}
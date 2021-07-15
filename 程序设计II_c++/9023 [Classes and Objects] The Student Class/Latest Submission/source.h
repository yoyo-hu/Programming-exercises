#include <iostream>
#include <cstring>
using namespace std;

class Student
{
public:
  int id;
  char name[50]; // Data field
  int age; // Data field
  Student(){
      id=0;
      strcpy(name, "No Name");
      age=0;
  }
  Student(int _id, const char _name[50]="No Name", int _age=0){
    id = _id;
    strcpy(name, _name);
    age = _age;
  }
  //void set(int, char*, int);
  //void print();
};
  void set(Student &obj,int _id, const char _name[50], int _age){
    obj.id = _id;
    strcpy(obj.name, _name);
    obj.age = _age;
  }
  void print(Student obj){
    cout << obj.name << " (" << obj.id << ") "<< "is " << obj.age << " years old." << endl;
  }
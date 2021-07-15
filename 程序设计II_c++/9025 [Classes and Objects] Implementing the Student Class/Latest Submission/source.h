#include <iostream>
#include <cstring>
using namespace std;
class Student {
public:
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
  void set(int _id, const char _name[50], int _age){
    id = _id;
    strcpy(name, _name);
    age = _age;
  }
  void print() const{
    cout << name << " (" << id << ") "<< "is " << age << " years old." << endl;
  }
private:
  int id;
  char name[50]; 
  int age; 
};
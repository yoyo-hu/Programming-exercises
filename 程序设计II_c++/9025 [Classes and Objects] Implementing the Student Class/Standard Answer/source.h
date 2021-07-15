
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Student
{
public:
  Student();
  Student(int, char*, int);
  void set(int, char*, int);
  void print() const;
private:
  int id;
  char name[50]; // Data field
  int age; // Data field
};

Student::Student() //Ĭ�Ϲ��캯�����ֱ�����
{
    id = 0;
    strcpy(name, "No Name");
    age = 0;
}

Student::Student(int mid, char* mname="No Name", int mage=0) //���캯��
{
    id = mid;
    strcpy(name, mname);
    age = mage;
}
void Student::set(int b, char* c, int d)
{
    id = b;
    strcpy(name, c);
    age = d;
}
void Student::print() const
{
    cout << name << " (" << id << ") " << "is " << age << " years old." << endl;
}                                 

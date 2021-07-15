#include <iostream>
#include <string>
#include "source.h"

using namespace std;

int main()
{
 Object *obj = new Dog();
 cout << instanceof(*obj) << endl;

 obj = new Animal();
 cout << instanceof(*obj) << endl;
 obj = new Car();
 cout << instanceof(*obj) << endl;

 obj = new Bus();
 cout << instanceof(*obj) << endl;
 obj = new Cat();
 cout << instanceof(*obj) << endl;

 obj = new Vehicle();
 cout << instanceof(*obj) << endl;
 obj = new Teacher();
 cout << instanceof(*obj) << endl;
 obj = new Person();
 cout << instanceof(*obj) << endl;
 obj = new Student();
 cout << instanceof(*obj) << endl;
 obj = new Object();
 cout << instanceof(*obj) << endl;

 //system("pause");
 return 0;
}
